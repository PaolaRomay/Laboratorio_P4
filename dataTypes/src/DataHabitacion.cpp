#include "../DataHabitacion.h"
#include <iostream>

DataHabitacion::DataHabitacion(){
}

DataHabitacion::DataHabitacion(int numero, float precio, int capacidad){
    this->numero = numero;
    this->precio = precio;
    this->capacidad = capacidad;
}

int DataHabitacion::getNumero(){
    return this->numero;
}

float DataHabitacion::getPrecio(){
    return this->precio;
}

int DataHabitacion::getCapacidad(){
    return this->capacidad;
}	

bool DataHabitacion::operator==(DataHabitacion h){
    return (this->numero == h.getNumero() && this->precio == h.getPrecio() && this->capacidad == h.getCapacidad());
}

