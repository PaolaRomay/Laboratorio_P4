#include "../DtDescripcion.h"
#include <iostream>

DtDescripcion::DtDescripcion(){
    
}

DtDescripcion::DtDescripcion(set<string> com, set<int> cal){
    this->comentarios = com;
    this->calificaciones = cal;
}

set<string> DtDescripcion::getComentarios(){
    return this->comentarios;
}

set<int> DtDescripcion::getCalificaciones(){
    return this->calificaciones;
}