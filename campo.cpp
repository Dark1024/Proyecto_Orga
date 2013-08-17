#include "campo.h"

campo::campo(string Nombre, char Tipo, bool Llave, int Tamano, int Decimales){
    this->Nombre = Nombre;
    this->Tipo = Tipo;
    this->Llave = Llave;
    this->Tamano = Tamano;
    this->Decimales = Decimales;
} //Fin del constructor sobre cargado

campo::campo(){
    this->Nombre = "";
    this->Tipo = ' ';
    this->Llave = false;
    this->Tamano = 0;
    this->Decimales = 0;
} //Fin del constructor simple

string campo::getNombre(){
    return Nombre;
} //Fn del getNombre

void campo::setNombre(string N){
    Nombre = N;
} //Fin del setNombre

char campo::getTipo(){
    return Tipo;
} //Fin del getTipo

void campo::setTipo(char T){
    Tipo = T;
} //Fin del setTipo

bool campo::esLlave(){
    return Llave;
} //Fin del metodo esLlave

void campo::setLlave(bool Llave){
    this->Llave = Llave;
} //Fin setLlave

int campo::getTamano(){
    return Tamano;
} //Fin getTamanio

void campo::setTamano(int Tam){
    Tamano = Tam;
} //Fin setTamano

int campo::getDecimales(){
    return Decimales;
} //Fin getDecimales

void campo::setDecimales(int Deci){
    Decimales = Deci;
} //Fin setDecimales
