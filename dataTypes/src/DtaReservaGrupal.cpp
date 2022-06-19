#include "DtaReservaGrupal.h"



DtaReservaGrupal::DtaReservaGrupal(int codigo,DataFecha checkIn,DataFecha checkOut,EstadoReserva estado ,float precio,int cantHuespedes){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->estado = estado;
    this->precio = precio;
    this->cantHuespedes = cantHuespedes;

}


int DtaReservaGrupal::getCantHuespedes(){
    return this->cantHuespedes;
}