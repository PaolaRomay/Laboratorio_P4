#include "../DtEmpleado.h"


DtEmpleado::DtEmpleado(string nombre,string email,string tipoCargo)
{
    this->nombre = nombre;
    this->email = email;
    this->tipoCargo = tipoCargo;


}

string DtEmpleado::getCargo(){
    return this->tipoCargo;
}