#ifndef RESERVACONTROLLER
#define RESERVACONTROLLER
#include <bits/stdc++.h>
#include <string>
#include <set>
#include "Reserva.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DataFecha.h"
#include "../dataTypes/DataHuesped.h"
#include "../dataTypes/DataReserva.h"
#include "IReservaController.h"
#include "EstadoReserva.h"
#include "Fabrica.h"
#include "../include/ReservaIndividual.h"
#include "../include/ReservaGrupal.h"


class ReservaController : public IReservaController
{
private:
	map<int,Reserva*> reservas;
	map<int,ReservaIndividual*> reservasIndividuales;
	map<int,ReservaGrupal*> reservasGrupales;
	static ReservaController *instancia;

public:
	
	static ReservaController *getInstance();
	set<DtaHostal*> obtenerHostalesRegistrados();
	void seleccionarHostal(string, DataFecha, DataFecha, bool);

	set<int> obtenerHabitacionesDisponibles();
	void seleccionarHabitacion(int);
	void seleccionarNombreHostal(string nombre);
	// set<DataHuesped> obtenerHuepedesRegistrados();
	void seleccionarHuesped(set<string>);
	// void cancelarAsignacion();
	void confirmarAsignacion();
	set<string> obtenerNombresHostalesRegistrados();
	 void seleccionarHostal(string);
	Huesped* ingresarEmailHuesped(string);
	// set<int> listarReservas();

	void seleccionarReserva(string,Huesped*,int);
	void obtenerReservas();
	void obtenercodReservas();
 void MostrarReservasNoCanceladas(Huesped*);
	// void cancelarBajaDeReserva();
	void confirmarBajaDeReserva(int,string);

	// DataReserva *verReservaAsociada();
};

#endif
