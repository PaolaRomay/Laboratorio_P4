#ifndef IHOSTALCONTROLLER
#define IHOSTALCONTROLLER
#include <string>
using namespace std;

#include <vector>
#include <set>
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataEmpleado.h"
#include "../dataTypes/DataUsuario.h"
#include "Cargo.h"
#include "../dataTypes/DataDescripcion.h"
#include "../dataTypes/DtaHostal.h"
#include "../dataTypes/DtEmpleado.h"
#include "../dataTypes/DatasHostal.h"
#include "../dataTypes/DataInfoBasicaHostal.h"

class IHostalController
{
public:
	virtual void ingresarDatosHostal(string, string, int) = 0;
	virtual set<string> obtenerNombresHostalesRegistrados() = 0;
	virtual set<DtaHostal*> obtenerHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string) = 0;
	virtual void seleccionarHostal2(string) = 0;
	virtual void ingresarDatosHab(int, float, int) = 0;
	virtual void darAltaHabitacion() = 0;
	// virtual void cancelarAlta() = 0;
	virtual set<DtEmpleado*> obtenerEmpleadosNoAsignados() = 0;
	virtual void seleccionarEmpleado(string, string) = 0;
	// virtual void cancelarAsignacion() = 0;
	virtual void confirmarAsignacion() = 0;
	virtual void darcodReservas(string aConsultar) = 0;
	// virtual vector<string> consultarTop3Hostales() = 0;//cambie aca tenia set
	// virtual DataDescripcion verDetalles(string) = 0;
	// virtual void ingresarEmailHuesped(string) = 0;
	// virtual set<DataEstadia> obtenerEstadiasFinalizadasHuesped() = 0;
	// virtual void seleccionarEstadia(int) = 0;
	// virtual void ingresarMensaje(string, int) = 0;
	// virtual void ingresarEmail(string) = 0;
	// virtual set<DataComentario> obtenerComentariosSInRespuesta() = 0;
	// virtual void seleccionComentario(int) = 0;
	// virtual void ingresarComentario(string) = 0;
	// virtual void setReservaHabitacion(Reserva*,string,int);
	virtual DataInfoBasicaHostal obtenerInformacionBasicaHostal() = 0;
};

#endif
