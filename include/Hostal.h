#ifndef HOSTAL
#define HOSTAL
#include <string>
#include <set>
#include "Habitacion.h"
// #include "Calificacion.h"
#include "Empleado.h"
// #include "../dataTypes/DataComentario.h"
// #include "../dataTypes/DataHostal.h"
// #include "Reserva.h"

// class Habitacion;
// class Calificacion;
// class Reserva;
#include <map>

class Hostal
{
private:
	string nombre;
	string direccion;
	int telefono;
	//set<Empleado> empleados_Hostal;
	map<int,Habitacion*> habitaciones; // no era un puntero a habitaciones, le puse yo(maxi) para poder hacer NULL
	set<Calificacion> *calificaciones;//no era un puntero a calificaciones, le puse yo(maxi) para poder hacer NULL
	// set<Reserva> *reservas;//no era un puntero a reservas, le puse yo(maxi) para poder hacer NULL

public:

Hostal();
	Hostal(string, string, int);
	string getDireccion();
	string getNombre();
	int getTelefono();
	//set<Empleado> setEmpleado(Empleado);
	map<int, Habitacion*> getHabitaciones();
	// set<Calificacion> getCalificaciones();
	// void setDireccion(string);
	// void setNombre(string);
	// void setTelefono(int);
	void setHabitacion(int,Habitacion*);
	// // set<Calificacion> setCalificaciones();
	// set<DataComentario> darComSinResp();
	// void ingresarCom(string);
	// DataHostal getDataInfoBasicaHostal();
	// void crearCalificacion(string, int);
	// set<Reserva> getReservas();
	// float getPromedio();
	// virtual ~Hostal();

};

#endif
