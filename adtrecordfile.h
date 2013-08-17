#ifndef ADTFILERECORD_H
#define ADTFILERECORD_H

#include "adtfile.h"
#include "campo.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ADTFileRecord: public ADTFile{
public:
    ADTFileRecord();
    ADTFileRecord(string, int);
    ~ADTFileRecord();
    void seek(int);
    string readRecord(int N);
    bool writeRecord(string Registro);
    bool updateRecord(int N, string NuevoRegistro);
    bool deleteRecord(int N);
private:
    string NombreArchivo;
    fstream FSArchivo;
    int TamRegistro;
    int InicioData;
    vector<campo> Campos;
};

#endif // ADTFILERECORD_H
