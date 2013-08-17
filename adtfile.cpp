#include "adtfile.h"

ADTFile::ADTFile(){
} //Fin del constructor

bool ADTFile::open(string PATH){
    Nombre = PATH;
    FSArchivo.open(Nombre.c_str(), ios_base::in | ios_base::out);
    return FSArchivo.is_open();
} //Fin open

bool ADTFile::close(){
    FSArchivo.close();
    bool retVal = FSArchivo.is_open();
    return !retVal;
}//Fin close

bool ADTFile::seekg(int n){
    FSArchivo.seekg(n);
    return FSArchivo.good();
} //Fin seek

bool ADTFile::seekp(int n){
    FSArchivo.seekp(n);
    return FSArchivo.good();
}

int ADTFile::tellg(){
    return FSArchivo.tellg();
}

int ADTFile::tellp(){
    return FSArchivo.tellp();
}

int ADTFile::read(char* s, int n){
    //s = new char[n];
    if (FSArchivo.is_open()){
        FSArchivo.read(s, n);
        s[n+1] = '\0';
        return FSArchivo.gcount();
    } else {
        return -1;
    } //Fin del else
} //Fin read

int ADTFile::write(const char * s, int n){
    if (FSArchivo.is_open()){
        FSArchivo.write(s, n);
        return FSArchivo.gcount(); //---------> OJO
    } else {
        return -1;
    } //Fin del else
} //Fin write

bool ADTFile::isEOF() const{
    if (FSArchivo.is_open()){
        return FSArchivo.eof();
    } else {
        return false;
    } //Fin del else
} //Fin eof


bool ADTFile::isBOF() const{
    bool retVal = false;
    if (FSArchivo.is_open()){
        /*-----------------------------------> OJO
        if (FSArchivo.tellp() == 0){
            retVal = true;
        }
        if (FSArchivo.tellg() == 0){
            retVal = true;
        }
        */
    } //Fin del if is_open()
    return retVal;
} //Fin bof


bool ADTFile::flush(){
    if (FSArchivo.is_open()){
        FSArchivo.flush();
        return FSArchivo.good();
    } else {
        return false;
    } //Fin del else
} //Fin del flush


ADTFile::~ADTFile(){
    FSArchivo.close();
} //Fin de la clase

