#include "../include/Estadia.h"

Estadia::Estadia(string nom,Huesped *h, Reserva *res, int numH, DataFecha ci, DataFecha co, string cod_est)
{
    this->hostal = nom;
    this->huesped = h;
    this->reserva = res;
    this->habitacion = numH;
    this->checkIn = ci;
    this->checkOut = co;
    this->codigoEstadia = cod_est;


}
string Estadia::getHostal()
{
    return this->hostal;
}
Huesped *Estadia::getHuesped()
{
    return this->huesped;
}
Reserva *Estadia::getReserva()
{
    return this->reserva;
}
// Calificacion *getCalificacion();
int Estadia::getHabitacion()
{
    return this->habitacion;
}
DataFecha Estadia::getCheckIn()
{
    return this->checkIn;
}
DataFecha Estadia::getCheckOut()
{
    return this->checkOut;
}
string Estadia::getCodigoEstadia()
{
    return this->codigoEstadia;
}