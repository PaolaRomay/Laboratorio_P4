#ifndef ESTADIACONTROLLER
#define ESTADIACONTROLLER
#include <string>
using namespace std;

#include <set>
#include "Estadia.h"
#include "../dataTypes/DataEstadia.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataReserva.h"
#include "Calificacion.h"
#include "Habitacion.h"
#include "IEstadiaController.h"

class EstadiaController : public IEstadiaController
{
private:
	set<Estadia> estadias;
	set<Habitacion> habitaciones;

public:
	static EstadiaController *getInstance();
	set<string> obtenerHostalesRegistrados();
	void seleccionarHostal(string);
	set<DataEstadia> obtenerEstadiasRegistradas(Hostal);
	void seleccionarEstadia(int);
	DataEstadia verInformacionEstadia();
	set<Habitacion> getHabitaciones();
	void setHabitaciones(Habitacion);
	bool esCalificadaEstadia();
	bool existeRespuestaEmpleado();
	int verCalificacionEstadia();
	set<DataComentario> verRespuestaEstadia();
	DataReserva *verReservaAsociada();
	int confirmarConsultaDeEstadia();
	void ingresarMensaje(Calificacion, string);
	void getEstadia(Estadia);
};

#endif
