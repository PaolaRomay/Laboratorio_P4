
#include "DataReservaGrupal.h"

#include <iostream>
using namespace std;

DataReservaGrupal::DataReservaGrupal(int codigo,DataFecha checkIn,DataFecha checkOut,int cantHuespedes){

    this->codigo = codigo;
    this->checkIn = checkIn;
    this->checkOut = checkOut;
    this->cantHuespedes = cantHuespedes;


}


int DataReservaGrupal::getCantHuespedes(){
    return this->cantHuespedes;
}


 std::ostream& operator<<(std::ostream& os, DataReservaGrupal* rg){
    DataFecha co = rg->getCheckOut();
    DataFecha ci = rg->getCheckIn();
 
	os
		<< "\nCodigo: " << rg->getCodigo() << "\nFechaCheckIn: " <<
         ci <<  "\nFechaCheckOut: " << co << "\nCantidad de Huespedes: "<< rg->getCantHuespedes();
	return os;
}