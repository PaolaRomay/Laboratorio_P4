#ifndef USUARIOCONTROLLER
#define USUARIOCONTROLLER
#include <string>
using namespace std;
#include <map>
#include "../dataTypes/DataUsuario.h"
#include "../dataTypes/DataEmpleado.h"
#include "../dataTypes/DataHuesped.h"
#include "Cargo.h"

//#include "Habitacion.h"
#include "Huesped.h"
#include "Empleado.h"
//#include "Calificacion.h"
#include "IUsuarioController.h"
using namespace std;
class UsuarioController : public IUsuarioController
{
private:
	map<string,Huesped*> huespedes;
	map<string,Empleado*> empleados;
	static UsuarioController *instancia;
	string prueba;
public:
	
	static UsuarioController *getInstance();
	void ingresarDatosAlta(string, string, string);
	void ingresarDatoEmpleado(string);
	void ingresarDatoHuesped(bool);
	void cancelarAlta();
	void reingresarEmail(string);
	void darAltaUsr();
	// set<string> obtenerHostalesRegistrados();
	// void seleccionarHostal(string);
	// void ingresarEmailHuesped(string);
	// bool estadiaActiva();
	// void confirmarFinalizarEstadia();
	// void cancelarFinalizarEstadia();
	map<string,Huesped*> obtenerHuespedesRegistrados();
	map<string,Empleado*> obtenerEmpleadosRegistrados();
	map<string,Usuario*> obtenerUsuariosRegistrados();
	void seleccionarUsuario(string);
	void obtenerInformacionUsuario();
	void asignaReservas(Reserva*,set<string>);
	// set<DataEmpleado> obtenerEmpleadosNoAsignados();
	// void seleccionarEmpleado(string, Cargo);
	// set<DataHuesped> obtenerHuespedesRegistrados();
	// void asignarHabitacionUsuario(Huesped, Habitacion); // era Habitacion o int?
	// void asignarHuespedReserva(Huesped);
	// void ingresarMensaje(Calificacion, string);
	// string darHostalTrabaja(string);
	// void bajaReservaDeHuesp(int,set<string>) ;
	void MostrarReservasNoCanceladas(string);
};

#endif
