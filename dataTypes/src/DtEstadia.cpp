#include "DtEstadia.h"


DtEstadia::DtEstadia(string hostal,string huesped,int habitacion,
                    DataFecha checkIn,DataFecha checkOut,int codigoPromo,int codigoReserva)
{

    this->hostal = getHostal();
    this->huesped = getHuesped();
    this->habitacion = getHabitacion();
    this->checkIn = getCheckIn();
    this->checkOut = getCheckOut();
    this->codigoPromo = codigoPromo;
    this->codigoReserva = codigoReserva;


}

int DtEstadia::getCodigoPromo(){
    return this->codigoPromo;
}

int DtEstadia::getCodigoReserva(){
    return this->codigoReserva;
}