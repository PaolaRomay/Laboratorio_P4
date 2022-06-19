#ifndef HUESPED
#define HUESPED
#include <string>
using namespace std;

#include <set>
#include <map>
#include "Reserva.h"
//#include "../dataTypes/DataDescripcion.h"
//#include "Calificacion.h"
#include "Estadia.h"
#include "Usuario.h"
#include "../dataTypes/DataHuesped.h"

//class Estadia;
class Usuario;
//class Reserva;
//class DataReserva;

class Reserva;

class Huesped : public Usuario
{
private:
	bool finger;
	//Calificacion *calificacion;
	//set<Estadia> estadias;
	map<int,Reserva*> reservas;

public:
	Huesped(string, string, string, bool);
	bool getFinger();
	void setFinger(bool);
	void setReserva(Reserva *);
	// Calificacion getCalificacion();
	// void setCalificacion(Calificacion);
	// set<Estadia> getEstadias();
	// void setEstadias();
	map<int,Reserva*> getReservas();
	// set<DataDescripcion> obtenerEstadias();
	// bool estadiaUsrActiva();
	// void crearEstadia(Reserva *);
	// DataReserva *getDatos();
	DataHuesped *getDataUsuario();
	// ~Huesped();
	void getReservasNoCanceladas();
};

#endif
