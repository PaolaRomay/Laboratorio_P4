#ifndef DTEMPLEADO
#define DTEMPLEADO 

#include "DataUsuario.h"
#include "../include/Cargo.h"
using namespace std;
class DtEmpleado : public DataUsuario{
    private:
        string tipoCargo;

    public:
        //DtEmpleado();
        DtEmpleado(string,string,string);
        string getCargo();
};


#endif