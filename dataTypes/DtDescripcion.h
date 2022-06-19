#ifndef DTDESCRIPCION
#define DTDESCRIPCION
#include <string>
#include <set>

using namespace std;

#include "DataHabitacion.h"

class DtDescripcion
{
protected:
	set<string> comentarios;
	set<int> calificaciones;

public:
	DtDescripcion();
	DtDescripcion(set<string>,set<int>);
	set<string> getComentarios();
	set<int> getCalificaciones();
};

#endif