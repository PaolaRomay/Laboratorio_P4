#include "../DataReserva.h"
#include <iostream>

// DataReserva::DataReserva(){
// }



int DataReserva::getCodigo(){
    return this->codigo;
}

DataFecha DataReserva::getCheckIn(){
    this->checkIn;
}

DataFecha DataReserva::getCheckOut(){
    this->checkOut;
}

EstadoReserva DataReserva::getEstado(){
    return this->estado;
}

float DataReserva::getPrecio(){
    return this->precio;
}

int DataReserva::getNumHab(){
    return this->numHab;
}






