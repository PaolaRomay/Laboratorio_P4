#ifndef USUARIO
#define USUARIO
#include <string>
using namespace std;

#include "../dataTypes/DataUsuario.h"
#include "Cargo.h"



class Usuario
{
protected:
	string nombre;
	string email;
	string password;

public:
	//Usuario();
	string getEmail();
	string getNombre();
	string getPassword();
	void setEmail(string);
	void setNombre(string);
	void setPassword(string);
	//virtual char *getCargo();
	// virtual DataUsuario *getDataUsuario() = 0;
	//~Usuario();
};

#endif
