#include "../include/Huesped.h"


Huesped::Huesped(string nombre, string email, string pass, bool finger){

    this->nombre = nombre;
    this->email = email;
    this->password = pass;
    this->finger = finger;

}
map<int,Reserva*> Huesped::getReservas(){
    return this->reservas;
}

void Huesped::setReserva(Reserva *nueva){
this->reservas.insert(pair<int,Reserva*> (nueva->getCodigo(),nueva));
}
// void Huesped::setReserva2(Reserva *nueva){

// this->reservas.erase(nueva->)
// }

bool Huesped::getFinger(){
    return this->finger;
}

void Huesped::setFinger(bool finger){
    this->finger = finger;
}

DataHuesped* Huesped::getDataUsuario(){
   DataHuesped *aux2 = new DataHuesped(this->getNombre(),this->getEmail(),this->getFinger());

   return aux2;
}
void Huesped::getReservasNoCanceladas(){
set<Reserva*> r;
    for (map<int,Reserva*>::iterator i = reservas.begin(); i!=reservas.end(); ++i){
        if(i->second->getEstado() != Cancelada){
            r.insert(i->second);
        
        }
    }
cout<<"RESERVAS NO CANCELADAS"<<endl;
    for(set<Reserva*>::iterator i2= r.begin(); i2!=r.end(); ++i2){
        Reserva* current = *i2;
        cout<<"Codigo:"<<current->getCodigo()<<endl;
    }
}
void Huesped::setEstadia(Estadia* nueva){
this->estadias.insert(nueva);
}
set<Estadia*> Huesped::getEstadias(){
    cout<<"LAS ESTADIAS DEL HUESPED SON:"<<endl;
    set<Estadia*> est = this->estadias;
    for(set<Estadia*>::iterator itr =est.begin(); itr!= est.end(); ++itr){
        Estadia* current = *itr;
        cout<< "codigo:"<<current->getCodigoEstadia()<<endl;
        cout<<"El hostal asociado es:  "<<current->getHostal()<<endl;
    }
    return this->estadias;
}