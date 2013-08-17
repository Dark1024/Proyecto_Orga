#ifndef ADTFILERECORD_H
#define ADTFILERECORD_H

#include "adtfile.h"
#include "campo.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>

using namespace std;

class ADTFileRecord: public ADTFile{
public:
    ADTFileRecord();
    ADTFileRecord(string, int);
    virtual ~ADTFileRecord();
    virtual void seekgRecord(int);
    virtual void seekpRecord(int);
    virtual string readRecord(int N);
    virtual bool writeRecord(string Registro);
    virtual bool updateRecord(int N, string NuevoRegistro);
    virtual bool deleteRecord(int N);
    virtual void compactar();
private:
    string NombreArchivo;
    fstream FSArchivo;
    int TamRegistro;
    int InicioData;
    vector<campo> Campos;
    int AvailListStart;
};

#endif // ADTFILERECORD_H
