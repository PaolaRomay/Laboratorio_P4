#ifndef DTARESERVA
#define DTARESERVA


#include "DatasReserva.h"


class DtaReserva: public DatasReserva {

    protected:
        // EstadoReserva estado;
        float precio;

    public:
        DtaReserva();
        // EstadoReserva getEstado();
        float getPrecio();

};


#endif