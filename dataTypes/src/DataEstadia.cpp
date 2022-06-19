#include "DataEstadia.h"



DataEstadia::DataEstadia(string hostal,string huesped,int habitacion,
                        DataFecha checkIn,DataFecha checkOut,int codigoEstadia)
{
    this->hostal = getHostal();
    this->huesped = getHuesped();
    this->habitacion = getHabitacion();
    this->checkIn = getCheckIn();
    this->checkOut = getCheckOut();
    this->codigoEstadia = codigoEstadia;

}

int DataEstadia::getCodigoEstadia(){
    return this->codigoEstadia;
}