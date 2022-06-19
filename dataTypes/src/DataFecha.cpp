#include "../DataFecha.h"
#include <iostream>

DataFecha::DataFecha(){
};

DataFecha::DataFecha(int dia, int mes, int anio, int hora){
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    this->hora = hora;
};

int DataFecha::getDia(){
    return this->dia;
}

int DataFecha::getMes(){
    return this->mes;
}

int DataFecha::getAnio(){
    return this->anio;
}

int DataFecha::getHora(){
    return this->hora;
}

// bool DataFecha::operator==(DataFecha f){
//     return (this->dia == f.getDia() && this->mes == f.getMes() && this->anio == f.getAnio() && this->hora == f.getHora());
// }

bool DataFecha::operator<(DataFecha f){
   // return (f.getAnio() < this->anio || (f.getAnio() == this->anio && f.getMes() < this->mes) || (f.getAnio() == this->anio && f.getMes() == this->mes && f.getDia() < this->dia) || (f.getAnio() == this->anio && f.getMes() == this->mes && f.getDia() == this->dia && f.getHora() < this->hora));
    cout<<this->dia<<endl;
    cout<<f.getDia();
    return (this->dia < f.getDia());
}