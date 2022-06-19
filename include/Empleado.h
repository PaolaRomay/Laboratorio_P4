#ifndef EMPLEADO
#define EMPLEADO
#include <string>
#include "Usuario.h"
#include <set>
#include "Cargo.h"
#include "bits/stdc++.h"
#include "Responde.h"
//#include "Notificacion.h"
#include "Hostal.h"
#include "Observer.h"
#include "../dataTypes/DataEmpleado.h"

using namespace std;

class Hostal;
class Responde;
//class Notificacion;
class Reserva;
class Estadia;
class Calificacion;
class Habitacion;
class DataReserva;
class Usuario;

// agregar public observer
class Empleado : public Usuario
{
private:
	string cargo; // estaba de tipo cargo pero es un tipo enumerado asi q lo puse string pero hay q revisar
	//set<Notificacion> notificaciones;
	Hostal *hostal;
	//set<Responde> respuestas;

public:
	Empleado(string, string, string, string, Hostal*);
	string getCargo();
	void setCargo(string);
	Hostal *getHostal();
	void setHostal(Hostal*);
	
	// set<Responde> getRespuestas();
	// void setRespuestas(Responde);
	// set<Notificacion> getNotificaciones();
	// void setNotificaciones(Notificacion);
	// void Notificar(Notificacion n);
	// DataReserva *getDatos();
	DataEmpleado *getDataUsuario();
	// ~Empleado();
};

#endif
