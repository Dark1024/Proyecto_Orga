#include "adtrecordfile.h"

ADTFileRecord::ADTFileRecord(){
} // Fin del constructor

ADTFileRecord::ADTFileRecord(string N, int T){
    this->Nombre = N;
    this->TamRegistro = T;
} // Fin del constructor SobreCargado

ADTFileRecord::~ADTFileRecord(){
    this->FSArchivo.flush();
    this->FSArchivo.close();
} //Fin del Destructor

void ADTFileRecord::seekgRecord(int NumRegistro){
    FSArchivo.seekg(InicioData+((NumRegistro-1)*TamRegistro));
} //Fin del seekg

void ADTFileRecord::seekpRecord(int NumRegistro){
    FSArchivo.seekp(InicioData+((NumRegistro-1)*TamRegistro));
}//Fin del seekp

string ADTFileRecord::readRecord(int N){
    char* tmp = new char[TamRegistro+1];
    seekgRecord(N);
    FSArchivo.read(tmp,TamRegistro);
    string retVal(tmp);
    return retVal;
}

bool ADTFileRecord::writeRecord(string Registro){

    if(AvailListStart == -1){
        FSArchivo.seekp(0,ios_base::end);
        FSArchivo.write(Registro.c_str(),Registro.length());
        if(FSArchivo.fail()){
            return false;
        }
    }else{
        string A = readRecord(AvailListStart);
        int indicador = 0;
        const char* tmp = A.c_str();
        for(int i = 0; i < A.length(); i++){
            if(tmp[i] == '$'){
                indicador = i;
                break;
            }
        }
        const char* tmp2 = A.substr(0,indicador).c_str();
        AvailListStart = atoi(tmp2);
        FSArchivo.write(Registro.c_str(),Registro.length());
        if(FSArchivo.fail()){
            return false;
        }
    }
    return true;
}

bool ADTFileRecord::updateRecord(int N, string NuevoRegistro){
    seekpRecord(N);
    FSArchivo.write(NuevoRegistro.c_str(),NuevoRegistro.length());
    return true;
}
bool ADTFileRecord::deleteRecord(int N){
    seekpRecord(N);

    stringstream ss;
    ss<<AvailListStart;

    const char* AvailNumber = ss.str().c_str();

    string tmp(AvailNumber);
    tmp += "$";
    FSArchivo.write(tmp.c_str(),tmp.length());
    if(FSArchivo.fail()){
        return false;
    }
    return true;
}

void ADTFileRecord::compactar(){

}
