#ifndef ADTFILE_H
#define ADTFILE_H

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class ADTFile{

public:
    ADTFile();
    virtual ~ADTFile();
    virtual bool open(string); //Metodo en que abre
    virtual bool close();
    virtual bool seekg(int);
    virtual bool seekp(int);
    virtual int tellg();
    virtual int tellp();
    virtual int read(char*, int);
    virtual int write(const char*, int);
    virtual bool isEOF() const;
    virtual bool isBOF() const;
    virtual bool flush();

protected:
    string Nombre;
    fstream FSArchivo;
};

#endif // ADTFILE_H
