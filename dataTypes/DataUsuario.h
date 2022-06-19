#ifndef DATAUSUARIO
#define DATAUSUARIO
#include <iostream>

using namespace std;


class DataUsuario {
    protected:
        string nombre;
        string email;
    public:
        //DataUsuario();
        string getNombre();
        string getEmail();
};


#endif