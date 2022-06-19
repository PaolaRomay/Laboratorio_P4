#ifndef HOSTALCONTROLLER
#define HOSTALCONTROLLER
#include <string>
#include <map>
#include <vector>
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DataInfoBasicaHostal.h"
#include "../dataTypes/DtaHostal.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataEmpleado.h"
#include "../dataTypes/DtEmpleado.h"
#include "Cargo.h"
#include "../dataTypes/DataDescripcion.h"
#include "IHostalController.h"

using namespace std;

class Hostal;


class HostalController : public IHostalController
{
private:
	map<string, Hostal*> hostales;
	map<string, Hostal> hostales2;
	map<int,Reserva*> ress;
	static HostalController *instancia;


public:
	static HostalController *getInstance();
	void ingresarDatosHostal(string, string, int);
	set<string> obtenerNombresHostalesRegistrados();
	set<DtaHostal*> obtenerHostalesRegistrados();
	void seleccionarHostal(string);
void  seleccionarHostal2(string);
	void ingresarDatosHab(int, float, int);
	void darAltaHabitacion();
	// void cancelarAlta();
	void darInfoReservas(string);
	set<DtEmpleado*> obtenerEmpleadosNoAsignados();
	void seleccionarEmpleado(string, string);
	// void cancelarAsignacion();
	void confirmarAsignacion();
	// vector<string> consultarTop3Hostales();
	// DataDescripcion verDetalles(string);
	// void ingresarEmailHuesped(string);
	// set<DataEstadia> obtenerEstadiasFinalizadasHuesped();
	// void seleccionarEstadia(int);
	// void ingresarMensaje(string, int);
	// void ingresarEmail(string);
	// set<DataComentario> obtenerComentariosSInRespuesta();
	// void seleccionComentario(int);
	// void ingresarComentario(string);
	DataInfoBasicaHostal obtenerInformacionBasicaHostal();
	// // set<DataHostal> obtenerHostalesRegistrados();
	// void seleccionarHostal(string, DataFecha, DataFecha, bool);
	set<int> obtenerHabitacionesDisponibles(string,DataFecha,DataFecha);
	void setReservaHabitacion(Reserva*,string,int);
	void darcodReservas(string aConsultar);
	void bajaReservaDeHab(int, string);
	Hostal* obtenerInstanciaHostal(string);
};

#endif
