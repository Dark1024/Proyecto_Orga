#ifndef CAMPO_H
#define CAMPO_H

#include <string>
using namespace std;

class campo{
public:
    campo();
    campo(string Nombre, char Tipo, bool Llave, int Tamano, int Decimales);
    string getNombre();
    void setNombre(string N);
    char getTipo();
    void setTipo(char T);
    bool esLlave();
    void setLlave(bool Llave);
    int getTamano();
    void setTamano(int Tam);
    int getDecimales();
    void setDecimales(int Deci);

private:
    string Nombre;
    char Tipo;
    bool Llave;
    int Tamano;
    int Decimales;
}; //Fin de la clase

#endif // CAMPO_H
