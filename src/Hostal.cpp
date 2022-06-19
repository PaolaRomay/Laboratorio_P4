#include "../include/Hostal.h"

Hostal::Hostal(){
    
}
 Hostal::Hostal(string nombre,string direccion,int telefono){
        this->nombre = nombre;
        this->direccion = direccion;
        this->telefono = telefono;
       
        //this->calificaciones = cals;
        //this->reservas = reservas;
 }

 string Hostal::getDireccion(){
     return this->direccion;
 };

string Hostal::getNombre(){
    return this->nombre;
}

int Hostal::getTelefono(){
    return this->telefono;
}
void Hostal::setHabitacion(int h,Habitacion *aSett)
{
    this->habitaciones.insert(pair<int, Habitacion*>(h,aSett));
   
}

// set<Empleado> Hostal::setEmpleado(Empleado h){
//     this->empleados_Hostal.insert( h);
// }

map<int,Habitacion*> Hostal::getHabitaciones(){

    return this->habitaciones;
}

// set<Calificacion> Hostal::getCalificaciones(){

// }

// set<DataComentario> Hostal::darComSinResp(){

// }

// void Hostal::ingresarCom(string com){
    
// }

// DataHostal Hostal::getDataInfoBasicaHostal(){

// }

// void Hostal::crearCalificacion(string com,int cal ){

// }

// set<Reserva> Hostal::getReservas(){

// }

//HACER DESTRUCTOR 


// float Hostal::getPromedio(){
//     int contador = 0;
//     float total = 0;
//     for (std::set<Calificacion>::iterator it = calificaciones->begin(); it != calificaciones->end(); ++it){
//         contador++;
//         Calificacion actual = *it;
//         total += actual.getCalificacion();
//     }
//     return total/contador;
// }