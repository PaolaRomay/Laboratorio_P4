#include "../DataHostal.h"

DataHostal::DataHostal(string nombreHostal, string direccionHostal, int telefonoHostal, float calPromedioHostal)
{
   this->nombre = nombreHostal;
   this->direccion = direccionHostal;
   this->telefono = telefonoHostal;
   this->calPromedio = calPromedioHostal;
}
string DataHostal::getNombre()
{
   return this->nombre;
}
string DataHostal::getDireccion()
{
   return this->direccion;
}
int DataHostal::getTelefono()
{
   return this->telefono;
}
float DataHostal::getCalPromedio()
{
   return this->calPromedio;
}

ostream &operator<<(ostream &os, DataHostal *data)
{

   os << "-------INFORMACION BASICA DEL HOSTAL-------\n"
      << "Nombre: " << data->getNombre() << endl
      << "Direccion: " << data->getDireccion() << endl
      << "Calificacion Promedio: " << data->getCalPromedio() << endl
      << "Telefono:" << data->getTelefono() << endl;
   os << "----------------------------------------\n";

   return os;
}
