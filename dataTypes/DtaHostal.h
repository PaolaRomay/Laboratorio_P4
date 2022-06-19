#ifndef DTAHOSTAL
#define DTAHOSTAL

#include "DatasHostal.h"

using namespace std;

class DtaHostal: public DatasHostal {
       // EstadoReserva estado; private:
        int calPromedio;

    public:

        DtaHostal(string,string,int);
        
        //int getCalPromedio();


};

#endif