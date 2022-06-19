#ifndef DATAHOSTAL
#define DATAHOSTAL
#include <string>
#include <iostream>
using namespace std;

class DataHostal
{
private:
    string nombre;
    string direccion;
    int telefono;
    float calPromedio;

public:
    DataHostal();
    DataHostal(string, string, int, float);
    string getNombre();
    string getDireccion();
    int getTelefono();
    float getCalPromedio();
    friend ostream &operator<<(ostream &os, DataHostal *);
};

#endif