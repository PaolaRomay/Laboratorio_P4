#ifndef DTARESERVAGRUPAL
#define DTARESERVAGRUPAL


#include "DtaReserva.h"


class DtaReservaGrupal: public DtaReserva {

    private:
        int cantHuespedes;

    public:
    DtaReservaGrupal(int,DataFecha,DataFecha,EstadoReserva,float,int);
    int getCantHuespedes();

};


#endif