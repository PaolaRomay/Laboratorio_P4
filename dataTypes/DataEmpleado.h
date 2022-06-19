#ifndef DATAEMPLEADO
#define DATAEMPLEADO


#include "DataUsuario.h"
#include "../include/Cargo.h"


class DataEmpleado: public DataUsuario
{
private:
    string hostal;
    Cargo tipoCargo;
public:
    DataEmpleado();
    DataEmpleado(string,string,string,Cargo);
    string getHostal();
    Cargo getCargo();
    ~DataEmpleado();
};





#endif