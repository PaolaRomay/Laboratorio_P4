#include "../include/Empleado.h"
string xD;
//Hostal x(xD,xD,6,NULL,NULL,NULL);
Empleado::Empleado(string nombre,string email,string pass,string cargo,Hostal *h){

    this->nombre = nombre;
    this->email = email;
    this->password = pass;
    this->cargo = cargo ;
    this->hostal = h;

}

string Empleado::getCargo(){
    return this->cargo;
}

void Empleado::setCargo(string cargo){
    this->cargo = cargo;
}
Hostal* Empleado::getHostal(){
    return this->hostal;
}

void Empleado::setHostal(Hostal *h){
    this->hostal = h;
}

DataEmpleado* Empleado::getDataUsuario(){
//    DataEmpleado *aux2 = new DataEmpleado(this->getNombre(),this->getEmail(),this->getFinger());

//    return aux2;
}