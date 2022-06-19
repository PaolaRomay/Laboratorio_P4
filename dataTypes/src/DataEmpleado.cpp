#include "../DataEmpleado.h"

DataEmpleado::DataEmpleado(){

}


DataEmpleado::DataEmpleado(string nombre,string email,string hostal,Cargo tipoCargo)
{
    this->nombre = getNombre();
    this->email = getEmail();
    this->hostal = hostal;
    this->tipoCargo = tipoCargo;
}


string DataEmpleado::getHostal(){
    return this->hostal;
}

Cargo DataEmpleado::getCargo(){
    return this->tipoCargo;
}

DataEmpleado::~DataEmpleado()
{
}