#ifndef RESERVAINDIVIDUAL
#define RESERVAINDIVIDUAL
#include "../dataTypes/DataFecha.h"
#include "Reserva.h"
#include "EstadoReserva.h"
#include <iostream>

class ReservaIndividual : public Reserva
{
public:
	ReservaIndividual(int, DataFecha, DataFecha, EstadoReserva, float,set<string>);
	DataReserva *getDatos();
};

#endif
