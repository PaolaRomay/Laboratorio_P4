#ifndef DATAESTADIA
#define DATAESTADIA

#include "DatasEstadia.h"


class DataEstadia: public DatasEstadia 
{
    private:
        int codigoEstadia;
    public:
        DataEstadia(string,string,int,DataFecha,DataFecha,int);
        int getCodigoEstadia();
};

#endif