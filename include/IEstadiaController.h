#ifndef IESTADIACONTROLLER
#define IESTADIACONTROLLER
#include <string>
#include <set>
#include "../dataTypes/DataEstadia.h"
#include "Hostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataReserva.h"

class IEstadiaController
{
public:
	virtual set<string> obtenerHostalesRegistrados() = 0;
	virtual void seleccionarHostal(string) = 0;
	virtual set<DataEstadia> obtenerEstadiasRegistradas(Hostal) = 0;
	virtual void seleccionarEstadia(int) = 0;
	virtual DataEstadia verInformacionEstadia() = 0;
	virtual bool esCalificadaEstadia() = 0;
	virtual bool existeRespuestaEmpleado() = 0;
	virtual int verCalificacionEstadia() = 0;
	virtual set<DataComentario> verRespuestaEstadia() = 0;
	virtual DataReserva *verReservaAsociada() = 0;
	virtual int confirmarConsultaDeEstadia() = 0;
};

#endif
