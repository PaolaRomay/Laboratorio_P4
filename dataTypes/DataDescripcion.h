#ifndef DATADESCRIPCION
#define DATADESCRIPCION
#include <string>
#include <set>
#include "DataHabitacion.h"
#include "DtDescripcion.h"

using namespace std;

class DataDescripcion: public DtDescripcion {
private:
	float promedio;
	DataHabitacion habitacion;

public:
	DataDescripcion();
	DataDescripcion(set<string>,set<int>,float,DataHabitacion);
	float getPromedio();
	DataHabitacion getHabitacion();
};

#endif