#ifndef FECHA
#define FECHA
#include <iostream>
#include <string>
using namespace std;

class DataFecha
{
private:
	int dia, mes, anio, hora;

public:
	DataFecha();
	DataFecha(int, int, int, int);
	int getDia();
	int getMes();
	int getAnio();
	int getHora();
	void getDia(int);
	void getMes(int);
	void getAnio(int);
	void getHora(int);
	// bool operator==(DataFecha);
	bool operator<(DataFecha);

};

ostream &operator<<(ostream &os, DataFecha &f);

#endif