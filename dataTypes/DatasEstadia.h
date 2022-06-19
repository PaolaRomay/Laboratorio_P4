#ifndef DATASESTADIAS
#define DATASESTADIAS

#include <iostream>
#include "DataFecha.h"
using namespace std;

class DatasEstadia
{
protected:
    string hostal;
    string huesped;
    int habitacion;
    DataFecha checkIn;
    DataFecha checkOut;

public:
    DatasEstadia();
    string getHostal();
    string getHuesped();
    int getHabitacion();
    DataFecha getCheckIn();
    DataFecha getCheckOut();

    ~DatasEstadia();
};







#endif