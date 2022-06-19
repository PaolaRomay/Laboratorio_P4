#ifndef HABITACION
#define HABITACION
#include <string>
#include "Hostal.h"
#include "Reserva.h"
//  #include "../dataTypes/DataFecha.h"
#include <map>

class Hostal;
class Habitacion
{
private:
	int numHab;
	float precio;
	int capacidad;
	Hostal *hostal;
	map<int,Reserva*> reservas;

public:
	Habitacion(int, float, int, Hostal*);
	int getNumHab();
// 	float getPrecio();
// 	int getCapacidad();
// 	Hostal *getHostal();
	bool getReservasDisponibles(DataFecha,DataFecha);
// // 	int setNumHab();
// // 	float setPrecio();
// // 	int setCapacidad();
 void setReservas(int,Reserva*);
  void setReservas2(map<int, Reserva *>);
 map<int,Reserva*> getReservas();
// 	set<Reserva> getReservas(DataFecha, DataFecha);
// 	~Habitacion();
};

#endif
