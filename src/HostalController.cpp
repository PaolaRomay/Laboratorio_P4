#include "../include/HostalController.h"
#include "../include/Fabrica.h"
#include <map>
#include <set>

using namespace std;

class DataDescripcion;

HostalController *HostalController::instancia = NULL;

HostalController *HostalController::getInstance()
{
    if (instancia == NULL)
        instancia = new HostalController();

    return instancia;
}

void HostalController::ingresarDatosHostal(string nom, string dir, int tel)
{

    // el controlador se encarga de decirle a
    // la clase hostal que cree una instancia de hostal
    // Hostal h = Hostal(nom, dir, tel); // alta de hostal solo pide los primeros 3 parametros,
    Hostal *haux = new Hostal(nom, dir, tel); // lo otro se va a ir agregando a medida que avanza
                                              // hostales.insert(pair<string, Hostal*>(nom, &h));

    // creada la instancia h
    // se agrega a la coleccion de hostales
    hostales.insert(pair<string, Hostal *>(nom, haux)); // hay que ver si tenemos un arreglo de objetos o un arreglo de punteros a objetos,
                                                        // en este caso tengo un arreglo de punteros a objetos, por eso en el parametro
                                                        // de push_back le paso la direccion de memoria donde apunta h (el objeto)
                                                        // no estoy seguro de esto que puse.
}

// vector<string> HostalController::consultarTop3Hostales(){
//     //Fabrica *fabrica = Fabrica::getInstance();
//     ReservaController *r = ReservaController::getInstance();
//     set<DataHostal> CalifHostales = r->obtenerHostalesRegistrados();
//     vector<string> resultado;
//     set<DataHostal>::iterator it = CalifHostales.begin();
//     DataHostal primero, segundo, tercero, actual;  //recorro los primero tres hostales
//     primero = *it;
//     ++it;
//     actual = *it;
//     if (primero.getCalPromedio() > actual.getCalPromedio())
//         segundo = *it;
//     else{
//         segundo = primero;
//         primero = *it;
//     }
//     ++it;
//     actual = *it;
//     if (actual.getCalPromedio() > primero.getCalPromedio()){
//         tercero = segundo;
//         segundo = primero;
//         primero = *it;
//     }
//     ++it; //termine de asignar los primero tres que se que existen
//     set<DataHostal>::iterator i;
//     for (i = it; it!=CalifHostales.end(); ++it){ //para los que quedan
//         actual = *it;
//         if (actual.getCalPromedio() > tercero.getCalPromedio()){
//             if (actual.getCalPromedio() > segundo.getCalPromedio()){
//                 if (actual.getCalPromedio() > primero.getCalPromedio()){
//                     tercero = segundo;
//                     segundo = primero;
//                     primero = *it;
//                 } else {
//                     tercero = segundo;
//                     segundo = *it;
//                 }
//             } else {
//                 tercero = *it;
//             }
//         }
//     }
//     resultado.push_back(primero.getNombre()); //esto accede al nombre del hostal?
//     resultado.push_back(segundo.getNombre()); //necesito saber como inserta, si no puede ser que primero no quede primero
//     resultado.push_back(tercero.getNombre()); //ARREGLO???*/
//     //vector<string> resultado;
//     return resultado;
// }

// DataDescripcion HostalController::verDetalles(string nombreHostal){
//     std::map<string, Hostal*>::iterator it;
//     it = hostales.find(nombreHostal);
//     Hostal* h = it->second;
//     set<Calificacion> cal = h->getCalificaciones();
//     set<int> calificaciones;
//     set<string> comentarios;
//     //recorrer el set de calificaciones
//     for (std::set<Calificacion>::iterator it = cal.begin(); it!=cal.end(); ++it){
//         Calificacion c = *it;
//         int cal = c.getCalificacion();
//         string com = c.getComentario();
//         calificaciones.insert(cal);
//         comentarios.insert(com);
//     }
//     DataHabitacion hab;
//     float f = -1;
//     DataDescripcion d(comentarios,calificaciones,f,hab);
//     return d;
// }

set<string> HostalController::obtenerNombresHostalesRegistrados()
{
    set<string> res;

    for (std::map<string, Hostal *>::iterator it = hostales.begin(); it != hostales.end(); ++it)
    {
        res.insert(it->first);
        cout << "-" << (it->first) << endl;
        // cout << "huespedes:";
        // cout << it->first << endl;
        // cout<<it->first<<endl;
    }
    return res;
}

string hostalAconsultar;
void HostalController::seleccionarHostal(string mail)
{
    hostalAconsultar = mail;
}

Hostal *seleccionado;
void HostalController::seleccionarHostal2(string aSeleccionar)
{
    map<string, Hostal *>::iterator itr = hostales.find(aSeleccionar);

    if (itr != hostales.end())
    {
        seleccionado = itr->second;
        // cout << "2"+ seleccionado->getNombre()<<endl;
        // cout << seleccionado->getDireccion()<<endl;
        // cout << seleccionado->getTelefono() <<endl;
    }
    else
    {
        cout << aSeleccionar << " no encontrado\n";
    }
   
}

set<DtEmpleado *> HostalController::obtenerEmpleadosNoAsignados()
{

    set<DtEmpleado *> empleadosNuevos;
    UsuarioController *u = UsuarioController::getInstance();
    map<string, Empleado *> empleadosaux = u->obtenerEmpleadosRegistrados();

    // // obtengo los nombres de los usuarios registrados

    for (map<string, Empleado *>::iterator i = empleadosaux.begin(); i != empleadosaux.end(); ++i)
    {
        //    cout<< "PRIMER EMPLEADO: "<<i->second->getHostal()->getNombre();

        if (i->second->getHostal()->getTelefono() == 0)
        {
            DtEmpleado *nuevo = new DtEmpleado(i->second->getNombre(), i->first, i->second->getCargo());
            cout << "EMPLEADOS NO ASIGNADOS: " << endl;
            cout << nuevo->getNombre() << endl;
            empleadosNuevos.insert(nuevo);
            //    cout<<nuevo->getEmail();
        }
        // return empleadosNuevos;
        // // Base class pointer holding
        // // Derived1 Class object
        //     Usuario* bp = dynamic_cast<Usuario*>(&);

        // // Dynamic_casting
        //     Empleado* dp2 = dynamic_cast<Empleado*>(bp);

        //     char *cargo = bp->getCargo();
        //      string nombre = i->first;
        //      string email = i->second.getEmail();
        //      DtEmpleado *dt = new DtEmpleado(nombre,email,NULL);
        //     // empleadosNuevos.insert(*dt);
        //     //destruir aca pq sino perdemos la memoria del anterior cada vez que entra al for

        //  }
    }
    return empleadosNuevos;
}

string empleadoSelec, cargo;

void HostalController::seleccionarEmpleado(string empleado, string cargo)
{
    empleadoSelec = empleado;
}

void HostalController::confirmarAsignacion()
{
    // cout<<"si";
    UsuarioController *aux = UsuarioController::getInstance();
    map<string, Empleado *> empAux = aux->obtenerEmpleadosRegistrados();
    Empleado *selec = empAux.find(empleadoSelec)->second;

    Hostal *auxHost;
    for (map<string, Hostal *>::iterator itr = hostales.begin(); itr != hostales.end(); ++itr)
    {
        // set<Reserva> getReservas(DataFecha, DataFecha);
        if (itr->second->getNombre() == hostalAconsultar)
        {
            selec->setHostal(itr->second);
        }

        // cout << //selec->getHostal()->getNombre();
        //  empAux.erase(empleadoSelec);
    }
}
int numeroHab;
float precioHabitacion;
int capacidadHab;
void HostalController::ingresarDatosHab(int numHab, float precioHab, int capHab)
{
    numeroHab = numHab;
    precioHabitacion = precioHab;
    capacidadHab = capHab;
}

void HostalController::darAltaHabitacion()
{
    //   Hostal *seleccionado = new Hostal("xx","aca",986);
    //  Habitacion *nueva = new Habitacion(5,5,2,seleccionado);
    Habitacion *nueva = new Habitacion(numeroHab, precioHabitacion, capacidadHab, seleccionado);
    cout << nueva->getNumHab() << endl;
    seleccionado->setHabitacion(numeroHab, nueva);
    map<int, Habitacion *> habaux = seleccionado->getHabitaciones();

    for (map<int, Habitacion *>::iterator it = habaux.begin(); it != habaux.end(); ++it)
    {
        cout << "El alta de la habitacion numero " << it->first << " fue dada de alta correctamente" << endl;
    }
}

// void HostalController::cancelarAlta(){
//     delete seleccionado; //??????????
// }

DataInfoBasicaHostal HostalController::obtenerInformacionBasicaHostal()
{
    bool existe = false;
    ;

    for (std::map<string, Hostal *>::iterator it = hostales.begin(); it != hostales.end(); ++it)
    {
        if (it->second->getNombre() == hostalAconsultar)
        {
            DataInfoBasicaHostal nuevo(it->first, it->second->getDireccion(), it->second->getTelefono());
            cout << "adentro" << it->first << endl;
            existe = true;
            return nuevo;
        }
    }
    if (!existe)
    {
        throw(404);
    }
}

///////////////////////////////REALIZAR RESERVA////////////////////////

set<DtaHostal *> HostalController::obtenerHostalesRegistrados()
{
    set<DtaHostal *> res;
    for (std::map<string, Hostal *>::iterator it = hostales.begin(); it != hostales.end(); ++it)
    {
        string nombre = it->second->getNombre();
        string direccion = it->second->getDireccion();

        // float promCal = it->second->getPromedio();	bool operator<(DataFecha);
        // DtaHostal d(nombre, direccion, promCal);
        DtaHostal *d = new DtaHostal(nombre, direccion, 55);

        res.insert(d);
    }
    return res;
}

set<int> HostalController::obtenerHabitacionesDisponibles(string hostalAconsultar, DataFecha ci, DataFecha co)
{
    set<int> aDevolver;

    for (std::map<string, Hostal *>::iterator it = hostales.begin(); it != hostales.end(); ++it)
    {

        if (it->second->getNombre() == hostalAconsultar)
        {

            map<int, Habitacion *> hab = it->second->getHabitaciones();

            for (map<int, Habitacion *>::iterator itr = hab.begin(); itr != hab.end(); ++itr)
            {

                bool disponible = itr->second->getReservasDisponibles(ci, co);
                if (disponible)
                {

                    aDevolver.insert(itr->first);
                }
            }
        }
    }
    for (set<int>::iterator itr = aDevolver.begin(); itr != aDevolver.end(); ++itr)
    {
        int current = *itr;
        cout << current << endl;
    }
    return aDevolver;
}

void HostalController::setReservaHabitacion(Reserva *nueva, string nombreHostal, int numHabitacion)
{
    this->ress.insert(pair<int,Reserva*>(nueva->getCodigo(),nueva));
    Hostal *asett = hostales.find(nombreHostal)->second;
    cout << nombreHostal;
    map<int, Habitacion *> habi = asett->getHabitaciones();
    for (map<int, Habitacion *>::iterator itr = habi.begin(); itr != habi.end(); ++itr)
    {
        cout << "si";
        if (itr->first == numHabitacion)
        {
            cout << "si2";
            itr->second->setReservas(nueva->getCodigo(), nueva);
            map<int, Reserva *> auxx = itr->second->getReservas();
            Reserva *ver = auxx.find(nueva->getCodigo())->second;
            cout << "Encontre la reserva de codigo";
            cout << ver->getCodigo();
        }
    }
}
//////me da todas las reservas de las habitaciones de un hostal///////////////
void HostalController::darInfoReservas(string aConsultar)
{

    Hostal *consulta = hostales.find(aConsultar)->second;
    map<int, Habitacion *> hab = consulta->getHabitaciones();
    for (map<int, Habitacion *>::iterator itr = hab.begin(); itr != hab.end(); ++itr)
    {
        cout << "La habitacion con numero de habitacion  " << itr->first << "  tiene las sigueintes reservas" << endl;
        map<int, Reserva *> reservasHab = itr->second->getReservas();
        for (map<int, Reserva *>::iterator i = reservasHab.begin(); i != reservasHab.end(); ++i)
        {
            cout << "el codigo de la reserva es: " << i->second->getCodigo() << endl;
            set<string> h = i->second->getHuesped();
            cout << "los huespedes son: ";
            for (set<string>::iterator iit = h.begin(); iit != h.end(); ++iit)
            {
                string current = *iit;
                cout << "- " << current << endl;
            }
        }
    }
}




void HostalController::darcodReservas(string aConsultar)
{
    int contr = 0;
    Hostal *consulta = hostales.find(aConsultar)->second;
    map<int, Habitacion *> hab = consulta->getHabitaciones();
    for (map<int, Habitacion *>::iterator itr = hab.begin(); itr != hab.end(); ++itr)
    {
        cout << "Los codigos de las reservas disponibles son:";
        map<int, Reserva *> reservasHab = itr->second->getReservas();
        for (map<int, Reserva *>::iterator i = reservasHab.begin(); i != reservasHab.end(); ++i)
        {
            cout << "Reserva" << contr << ": " << i->second->getCodigo() << endl;
            contr++;
        }
    }
}
void HostalController::bajaReservaDeHab(int codigoBaja, string nombreHostal)
{

    Hostal *h = this->hostales.find(nombreHostal)->second;
    map<int, Habitacion *> habi = h->getHabitaciones();
    for (map<int, Habitacion *>::iterator itr = habi.begin(); itr != habi.end(); ++itr)
    {
        map<int, Reserva *> reservasHab = itr->second->getReservas();
        if (!reservasHab.empty()){
        std::map<int, Reserva *>::iterator itr2 = reservasHab.find(codigoBaja);
        if (itr2 != reservasHab.end())
        {
        //    delete itr2->second;
           reservasHab.erase(itr2);
            itr->second->setReservas2(reservasHab);
        }
        }
        map<int, Reserva *> reservasHab2 = itr->second->getReservas();
        if (!reservasHab2.empty()){
        std::map<int, Reserva *>::iterator itr3 = reservasHab2.find(codigoBaja);
        if (itr3 != reservasHab2.end())
        {
       cout<<"sigue estando"<<itr3->first;
        }
        }
    }


    ////////////////////////////borro de hostalcontroller/////////////////////////////
     std::map<int, Reserva *>::iterator itr2 = ress.find(codigoBaja);
        if (itr2 != ress.end())
        {
            // found it - delete it
            delete itr2->second;
           ress.erase(itr2);
         
        }
   std::map<int, Reserva *>::iterator itr3 = ress.find(codigoBaja);
   if(itr3 == ress.end()){
    cout<<"anda";
   }
}

Hostal* HostalController::obtenerInstanciaHostal(string inst_hos){
map<string, Hostal *>::iterator itr = hostales.find(inst_hos);

    if (itr != hostales.end())
    {
   return itr->second;
    }
    else
    {
        cout << inst_hos << " no encontrado\n";
        return 0;
    }
    
}