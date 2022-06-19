#ifndef INFORESERVAGRUPAL
#define INFORESERVAGRUPAL

#include "InfoReserva.h"

#include <set>
using namespace std;


class InfoReservaGrupal : public InfoReserva
{
    private:
        int cantHuespedes;
        set<string> huespedes;

    public:
        InfoReservaGrupal(int,DataFecha,DataFecha,int,int,set<string>);
        int getCantHuespedes();
        set<string> getHuespedes();
};

#endif