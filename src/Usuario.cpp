
#include "../include/Usuario.h"


    

	string Usuario::getEmail()
    {
        return this->email;
    }
	string Usuario::getNombre()
    {
        return this->nombre;
    }
	string Usuario::getPassword()
    {
        return this->password;
    }
	void Usuario::setEmail(string email)
    {
        this->email = email;
    }
	void Usuario::setNombre(string nombre)
    {
        this->nombre = nombre;
    }
	void Usuario::setPassword(string pass)
    {
        this->password = pass;
    }