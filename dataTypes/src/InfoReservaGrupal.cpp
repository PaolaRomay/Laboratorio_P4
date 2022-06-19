#include "InfoReservaGrupal.h"


InfoReservaGrupal::InfoReservaGrupal(int codigo,DataFecha checkIn,DataFecha checkOut,int numHab,int cantHuespedes,set<string> huespedes){
    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->numHab = numHab;
    this->cantHuespedes = cantHuespedes;
    this->huespedes = huespedes;

}


int InfoReservaGrupal::getCantHuespedes(){
    return this->cantHuespedes;
}

set<string> InfoReservaGrupal::getHuespedes(){
    return this->huespedes;
}