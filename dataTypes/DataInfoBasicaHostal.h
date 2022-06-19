#ifndef DATAINFOBASICAHOSTAL
#define DATAINFOBASICAHOSTAL

#include "DatasHostal.h"

class DataInfoBasicaHostal: public DatasHostal
{
private:
    int telefono;
public:
    DataInfoBasicaHostal();
    DataInfoBasicaHostal(string,string,int);
    int getTelefono();
    // ~DataInfoBasicaHostal();

    friend ostream &operator<<(ostream &os,DataInfoBasicaHostal); 
};










#endif