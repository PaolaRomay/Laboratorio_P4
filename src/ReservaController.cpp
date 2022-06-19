#include "../include/ReservaController.h"

//#include "../include/ReservaIndividual.h"

#include <map>
#include <set>

using namespace std;

class DtaHostal;

ReservaController *ReservaController::instancia = NULL;

ReservaController *ReservaController::getInstance()
{
    if (instancia == NULL)
        instancia = new ReservaController();

    return instancia;
}

set<DtaHostal *> ReservaController::obtenerHostalesRegistrados()
{
    HostalController *h = HostalController::getInstance();
    set<DtaHostal *> res = h->obtenerHostalesRegistrados();
    return res;
}

set<string> ReservaController::obtenerNombresHostalesRegistrados()
{
    HostalController *h = HostalController::getInstance();
    set<string> ret = h->obtenerNombresHostalesRegistrados();
    return ret;
}

string nombreh;
DataFecha ci, co;
bool tipoRes;
void ReservaController::seleccionarNombreHostal(string nombre)
{
    // HostalController *h = HostalController::getInstance();
    nombreh = nombre;
}

void ReservaController::seleccionarHostal(string nombre, DataFecha checkIn, DataFecha checkOut, bool tipo)
{
  
    nombreh = nombre;
    ci = checkIn;
    co = checkOut;
    tipoRes = tipo;

    // cout<<checkIn.getDia()<<endl;
    // cout<<checkOut.getDia()<<endl;

    // this->codigo = 0;
}
set<int> ReservaController::obtenerHabitacionesDisponibles()
{
    
    HostalController *h = HostalController::getInstance();
    set<int> aux = h->obtenerHabitacionesDisponibles(nombreh, ci, co);
  
    for (set<int>::iterator itr = aux.begin(); itr != aux.end(); ++itr)
    {
        int current = *itr;
        cout << current << endl;
    }
   
    return aux;
}

int hab_selec;

void ReservaController::seleccionarHabitacion(int numHabASelec)
{
    hab_selec = numHabASelec;
}
set<string> conjuntoHuespedesSeleccionados;
void ReservaController::seleccionarHuesped(set<string> seleccion)
{
    conjuntoHuespedesSeleccionados = seleccion;
}
// tipoRes = 1 ----> Reserva Individual
// tipoRes = 0 ----> Reserva Grupal
int codigores = 0;
HostalController *aux = HostalController::getInstance();

UsuarioController *usrs = UsuarioController::getInstance();

void ReservaController::confirmarAsignacion()
{

    if (tipoRes == 1)
    {
        // tengo q crear reservaIndividual
        ReservaIndividual *nueva = new ReservaIndividual(codigores, ci, co, Abierta, 1000, conjuntoHuespedesSeleccionados);
        reservasIndividuales.insert(pair<int, ReservaIndividual *>(codigores, nueva));
        reservas.insert(pair<int, ReservaIndividual *>(codigores, nueva));
        aux->setReservaHabitacion(nueva, nombreh, hab_selec);
        codigores++;

        usrs->asignaReservas(nueva, conjuntoHuespedesSeleccionados);
        map<string, Huesped *> huesp = usrs->obtenerHuespedesRegistrados();
        map<int,Reserva *> corroborar = huesp.begin()->second->getReservas();
        Reserva *mierda = corroborar.begin()->second;
        cout << "se agrego reserva en set de reservas de huesped" << endl;
        cout << mierda->getCodigo();
    }
    else
    {
        ReservaGrupal *nueva = new ReservaGrupal(codigores, ci, co, Abierta, 2000, conjuntoHuespedesSeleccionados.size(), conjuntoHuespedesSeleccionados);
        reservasGrupales.insert(pair<int, ReservaGrupal *>(codigores, nueva));
        reservas.insert(pair<int, ReservaGrupal *>(codigores, nueva));
        codigores++;
        aux->setReservaHabitacion(nueva, nombreh, hab_selec);
        usrs->asignaReservas(nueva, conjuntoHuespedesSeleccionados);
        map<string, Huesped *> huesp = usrs->obtenerHuespedesRegistrados();
        map<int,Reserva *> corroborar = huesp.begin()->second->getReservas();
        Reserva *mierda = corroborar.begin()->second;
        cout << "se agrego reserva en set de reservas de huespedess  " << endl;
        cout << mierda->getCodigo();
    }
}
void ReservaController::obtenerReservas()
{
cout<<"EL NOMBRE DEL HOSTAL A CONSULTAR RESERVA"<<nombreh;
    aux->darInfoReservas(nombreh);
}
void ReservaController::obtenercodReservas()
{
    
    aux->darcodReservas(nombreh);
}

void ReservaController::confirmarBajaDeReserva(int codigoBaja,string hos) {
 aux->bajaReservaDeHab(codigoBaja,hos);
// usrs->bajaReservaDeHuesp(codigoBaja,conjuntoHuespedesSeleccionados);







 //CALIFICACIONES TAMBIEN DESPUES
}





Huesped* ReservaController:: ingresarEmailHuesped(string emailHuesped){
    
   UsuarioController *u= UsuarioController::getInstance();
 map<string,Huesped*> buscar = u->obtenerHuespedesRegistrados();
  Huesped* res = buscar.find(emailHuesped)->second;
  return res;
} 


void ReservaController::MostrarReservasNoCanceladas(Huesped* emailHues){
usrs->MostrarReservasNoCanceladas(emailHues->getEmail());
}

    int numeroHabitacion;
void ReservaController::seleccionarReserva(string nombreHost, Huesped* huespedEstadia,int reserva,Hostal* h){
    Reserva * buscada = reservas.find(reserva)->second;
    map<int,Habitacion*> aux = h->getHabitaciones();
    for(map<int,Habitacion*>::iterator i = aux.begin(); i!= aux.end(); ++i){
      map<int,Reserva*> reservas =  i->second->getReservas();
     if( reservas.find(reserva) != reservas.end()){ //////esta la reserva en esa habitacion me tengo q quedar con el numero
       numeroHabitacion = i->second->getNumHab();
     }
    }
    // Estadia(string, Huesped *, Reserva *, int, DataFecha, DataFecha, string);
// usrs->reserva->MostrarReservasNoCanceladas(hues);
// Estadia nueva =


}
Hostal * ReservaController::seleccionarHostal3(string nomh){
//     HostalController *h = HostalController::getInstance();
//     Hostal* res = h->seleccionarHostal2(nomh);
// return res;
}
