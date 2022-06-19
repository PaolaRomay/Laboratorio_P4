#include "../include/ReservaGrupal.h"
#include "../include/Reserva.h"

ReservaGrupal::ReservaGrupal(int codigo, DataFecha ci, DataFecha co, EstadoReserva estado, float precio, int cantidad, set<string> huespedes){
    this->codigo = codigo;
    this->checkIn = ci;
    this->checkOut = co;
    this->estado = estado;
    this->canthuespedes = canthuespedes;
    this->huesped = huespedes;

}

int ReservaGrupal::getCanthuespedes(){
    return this->canthuespedes;
}

DataReserva* ReservaGrupal::getDatos(){
    return NULL;
}

//float ReservaGrupal::getPrecio(){
//    return (this->precio)*canthuespedes;
//}

//ReservaGrupal::~ReservaGrupal(){
//}