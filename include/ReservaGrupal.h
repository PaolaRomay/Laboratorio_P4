#ifndef RESERVAGRUPAL
#define RESERVAGRUPAL
#include "../dataTypes/DataFecha.h"
#include "Reserva.h"
#include "EstadoReserva.h"
#include <iostream>

class ReservaGrupal : public Reserva
{
private:
	int canthuespedes;

public:
	ReservaGrupal(int, DataFecha, DataFecha, EstadoReserva, float, int,set<string>);
	int getCanthuespedes();
	DataReserva *getDatos();
};

#endif
