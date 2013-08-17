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

void ADTFileRecord::seek(int NumRegistro){

} //Fin del seek
