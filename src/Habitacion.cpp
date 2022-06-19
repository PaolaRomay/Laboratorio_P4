#include "../include/Habitacion.h"

Habitacion::Habitacion(int numHab, float precioHab, int capacidadHab, Hostal *HostalHab)
{
    this->numHab = numHab;
    this->precio = precioHab;
    this->capacidad = capacidadHab;
    this->hostal = HostalHab;
}

int Habitacion::getNumHab()
{
    return this->numHab;
}

// float Habitacion::getPrecio(){
//     return this->precio;
// }

// int Habitacion::getCapacidad(){
//     return this->capacidad;
// }

// Hostal* Habitacion::getHostal(){
//     return this->hostal;
// }

int cont = 0;
bool Habitacion::getReservasDisponibles(DataFecha ci, DataFecha co)
{
    // map<int, Reserva *> *current = reservas;
    // for (map<int, Reserva *>::iterator itr = current->begin(); itr != current->end(); ++itr)
    // {

    //     Reserva *current = itr->second;
    //     if (co < current->getCheckIn() || current->getCheckOut() < ci)
    //     {
    //         cont++;
    //     }
    // }

    // return cont == reservas->size();
}

void Habitacion::setReservas(int codigo, Reserva *nueva)
{
    // map<int, Reserva *> *current = this->reservas;
    reservas.insert(pair<int, Reserva *>(codigo, nueva));
}
void Habitacion::setReservas2(map<int, Reserva *> ahora)
{
 this->reservas = ahora;
       
        
}


map<int, Reserva *> Habitacion::getReservas()
{
    return this->reservas;
}