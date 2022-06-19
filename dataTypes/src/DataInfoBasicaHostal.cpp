#include "../DataInfoBasicaHostal.h"


DataInfoBasicaHostal::DataInfoBasicaHostal(){

}
DataInfoBasicaHostal::DataInfoBasicaHostal(string nombre, string direccion, int telefono)
{
    this->nombre = nombre;
    this->direccion = direccion;
    this->telefono = telefono;
}

int DataInfoBasicaHostal::getTelefono(){
    return this->telefono;
}


ostream &operator<<(ostream &os,DataInfoBasicaHostal data){

     os << "-------INFORMACION BASICA DEL HOSTAL-------\n"
      << "Nombre: " << data.getNombre() << endl
      << "Direccion: " << data.getDireccion() << endl
      << "Telefono:" << data.getTelefono() << endl;
   os << "----------------------------------------\n";
   return os;

}
