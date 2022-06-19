#ifndef IUSUARIOCONTROLLER
#define IUSUARIOCONTROLLER
#include <string>
#include <set>

#include "../dataTypes/DataUsuario.h"
#include "../dataTypes/DataHuesped.h"
#include "../dataTypes/DtEmpleado.h"
#include "Cargo.h"

class IUsuarioController{
	public:
		virtual void ingresarDatosAlta(string, string, string)=0; 
		virtual void ingresarDatoEmpleado(string)=0; 
		virtual void ingresarDatoHuesped(bool)=0; 
		virtual void cancelarAlta()=0; 
		virtual void reingresarEmail(string)=0; 
		virtual void darAltaUsr()=0; 
		// virtual set<string> obtenerHostalesRegistrados()=0; 
		// virtual void seleccionarHostal(string)=0; 
		// virtual void ingresarEmailHuesped(string)=0; 
		// virtual bool estadiaActiva()=0; 
		// virtual void confirmarFinalizarEstadia()=0; 
		// virtual void cancelarFinalizarEstadia()=0; 
		virtual map<string,Huesped*> obtenerHuespedesRegistrados()=0;
		virtual map<string,Empleado*> obtenerEmpleadosRegistrados()=0;
		virtual map<string,Usuario*> obtenerUsuariosRegistrados()=0; 
		virtual void seleccionarUsuario(string)=0; 
		virtual void obtenerInformacionUsuario()=0; 
			// virtual void bajaReservaDeHuesp(int,set<string>) = 0;
		};

#endif
