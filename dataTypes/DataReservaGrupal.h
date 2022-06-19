#ifndef DATARESERVAGRUPAL
#define DATARESERVAGRUPAL


#include "DataReserva.h"


class DataReservaGrupal: public DataReserva {

    private:
        int cantHuespedes;
    public:
        
        DataReservaGrupal(int,DataFecha,DataFecha,int);
        int getCantHuespedes();

        friend std::ostream& operator<<(std::ostream& output, const DataReservaGrupal *D );
};

#endif