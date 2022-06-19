
#include "../include/ReservaIndividual.h"

ReservaIndividual::ReservaIndividual(int codigo, DataFecha ci, DataFecha co, EstadoReserva est, float precio,set<string> nombre){

    this->codigo = codigo;
    this->checkIn = ci;
    this->checkOut = co;
    this->estado = est;
    this->huesped = nombre;



}