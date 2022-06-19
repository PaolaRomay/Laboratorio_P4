#ifndef IRESERVACONTROLLER
#define IRESERVACONTROLLER
#include <string>
using namespace std;

#include <set>
// #include "../dataTypes/DataHuesped.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DataFecha.h"
// #include "../dataTypes/DataReserva.h"
#include "../include/Huesped.h"
#include "../include/Hostal.h"

class IReservaController
{
public:
	virtual set<DtaHostal*> obtenerHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string, DataFecha, DataFecha, bool) = 0;
	virtual set<int> obtenerHabitacionesDisponibles() = 0;
	virtual void seleccionarHabitacion(int) = 0;
	virtual void seleccionarNombreHostal(string)=0;
	// virtual set<DataHuesped> obtenerHuepedesRegistrados() = 0;
	virtual void seleccionarHuesped(set<string>) = 0;
	// virtual void cancelarAsignacion() = 0;
	virtual void confirmarAsignacion() = 0;
	virtual set<string> obtenerNombresHostalesRegistrados() = 0;

	virtual Huesped* ingresarEmailHuesped(string) = 0;
	// virtual set<int> listarReservas() = 0;
	virtual Hostal* seleccionarHostal3(string)=0;
	virtual void obtenerReservas() = 0;
	virtual void obtenercodReservas() = 0;
	//virtual void cancelarBajaDeReserva() = 0;
	virtual void confirmarBajaDeReserva(int,string) = 0;
virtual void MostrarReservasNoCanceladas(Huesped*)=0;
virtual void seleccionarReserva(string,Huesped*,int,Hostal*)=0;

};

#endif
