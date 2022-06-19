#ifndef DTESTADIA
#define DTESTADIA

#include "DatasEstadia.h"


class DtEstadia: public DatasEstadia
{
private:
    int codigoPromo;
    int codigoReserva;
public:
    DtEstadia(string,string,int,DataFecha,DataFecha,int,int);
    int getCodigoPromo();
    int getCodigoReserva();

   // ~DtEstadia() ;
};

#endif