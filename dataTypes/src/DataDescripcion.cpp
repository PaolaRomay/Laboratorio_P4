#include "../DataDescripcion.h"
#include <iostream>

DataDescripcion::DataDescripcion(){
}

DataDescripcion::DataDescripcion(set<string> com, set<int> cal,float prom, DataHabitacion hab){
    this->comentarios = com;
    this->calificaciones = cal;
    this->promedio = prom;
    this->habitacion = hab;
}

float DataDescripcion::getPromedio(){
    return this->promedio;
}

DataHabitacion DataDescripcion::getHabitacion(){
    return this->habitacion;
}




