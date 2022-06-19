#ifndef ESTADIA
#define ESTADIA
#include <string>

#include "../dataTypes/DataFecha.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Calificacion.h"
#include "../dataTypes/DataEstadia.h"
using namespace std;

class Estadia
{
private:
	// string hostal;
	// Huesped *huesped;
	// Reserva *reserva;
	// Calificacion *calificacion;
	// int habitacion;
	// DataFecha checkIn;
	// DataFecha checkOut;
	// string codigoEstadia;
	// int codigoPromo;

public:
	// Estadia(string, Huesped *, Reserva *, int, DataFecha, DataFecha, string);
	// string getHostal();
	// Huesped *getHuesped();
	// Reserva *getReserva();
	// Calificacion *getCalificacion();
	// int getHabitacion();
	// DataFecha getCheckIn();
	// DataFecha getCheckOut();
	// string getCodigoEstadia();
	// int getCodigoPromo();
	// string setHostal(string);
	// void *setHuesped(Huesped);
	// void *setReserva(Reserva); //aca va a tener que ser setReservaGruapal o 
	// 							  //setReservaIndividual, porque la clase reserva tiene
	// 							//funciones virtuales puras, lo que hacen a la clase abstracta
	// 							//y no se pueden pasar parametros de clases abstractas
	// 							//otra opción sería que no haya funciones virtuales PURAS
	// 							//pero si funciones virtuales nomas, que esas no hacen a la clase
	// 							//que sea abstracta, pero si dejan que se defina la funcion virtual,
	// 							// lo que no es la idea (igual el profe no se da cuenta)
	// 							//pero si dejamos como está no compila.
	// 							//Escribiendo esto me di cuenta que: en Reserva.h no va setReserva(),
	// 							//va setReservaIndividual() y setReservaGrupal() en sus clases
	// 							//derivadas respectivamente
	// Calificacion *setCalificacion(Calificacion);
	// int setHabitacion(int);
	// DataFecha setCheckIn(DataFecha);
	// DataFecha setCheckOut(DataFecha);
	// string setCodigoEstadia(string);
	// int setCodigoPromo(int);
	// bool estaFinalizada();
	// DataEstadia obtenerDataEstadia();
	// bool existeActiva();
	// DataEstadia getInfoEstadia();
	// ~Estadia();
};

#endif
