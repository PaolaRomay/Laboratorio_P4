#include "../include/UsuarioController.h"
#include <iostream>
#include <cstddef>
using namespace std;

class Fabrica;

UsuarioController *UsuarioController::instancia = NULL;

UsuarioController *UsuarioController::getInstance()
{
    if (instancia == NULL)
        instancia = new UsuarioController();

    return instancia;
}



//----------------------------------
string null = "Vacia";
class DatosAlta
{
public:
    DatosAlta(){
        this->cargo ="null";

    };
    string nombre;
    string mail;
    string pass;
    bool *finger = NULL;
    string cargo = null;
    
   
};

DatosAlta *Obj = new DatosAlta();

//----------------------------------
void UsuarioController::ingresarDatosAlta(string nombre, string mail, string pass)
{
Obj->cargo = "null";
    Obj->nombre = nombre;
    Obj->mail = mail;
    Obj->pass = pass;
}

void UsuarioController::ingresarDatoEmpleado(string cargo)
{

    
    Obj->cargo = cargo;
    cout << "Nombre: " << Obj->nombre << endl;
    cout << "Email: " << Obj->mail << endl;
    cout << "Contraseña: " << Obj->pass << endl;
    cout<<"Cargo: " <<Obj->cargo<<endl;
}

void UsuarioController::ingresarDatoHuesped(bool finger)
{
cout<< "entro";
cout<< finger;
    bool *it = &finger;
    Obj->finger = it;
    cout << "Nombre: " << Obj->nombre << endl;
    cout << "Email: " << Obj->mail << endl;
    cout << "Contraseña: " << Obj->pass << endl;
    // cout<<"Finger: " <<Obj.finger<<endl;
}

//////////////////NUEVA FUNCION/////////////////////////////////

map<string,Empleado*> UsuarioController::obtenerEmpleadosRegistrados(){
// cout<<"entra"<<empleados.begin()->first<<"andaaaaaaaa"
    //  map<string,Empleado*> res;
    // for (map<string, Empleado*>::iterator it = empleados.begin(); it != empleados.end(); ++it)
    // {
        
    //     //Usuario *bp = dynamic_cast<Usuario*>(&it->second);
    //     res.insert(pair<string, Empleado*>(it->first, it->second));
        
    //     //cout<< res[it->second.getNombre().].getCargo();
    // }
    return this->empleados;

}
map<string,Huesped*> UsuarioController::obtenerHuespedesRegistrados(){

     map<string,Huesped*> res;
    for (map<string, Huesped*>::iterator it = huespedes.begin(); it != huespedes.end(); ++it)
    {
        
        //Usuario *bp = dynamic_cast<Usuario*>(&it->second);
        res.insert(pair<string, Huesped*>(it->first, it->second));
        
        //cout<< res[it->second.getNombre().].getCargo();
    }
    return res;

}




/////////////////////////////////////////////////

map<string,Usuario*> UsuarioController::obtenerUsuariosRegistrados()
{
    map<string,Usuario*> res;
    
    
    for (std::map<string, Huesped*>::iterator it = huespedes.begin(); it != huespedes.end(); ++it)
    {
        
        //Usuario *bp = dynamic_cast<Usuario*>(&it->second);
        res.insert(pair<string, Usuario*>(it->first,it->second));
        
        // cout << "huespedes:";
        // cout << it->first << endl;
        // cout<<it->first<<endl;
    }
    for (std::map<string, Empleado*>::iterator it = empleados.begin(); it != empleados.end(); ++it)
    {
        
        //Usuario *bp = dynamic_cast<Usuario*>(&it->second);
        res.insert(pair<string, Usuario*>(it->first, it->second));
       
        
    }
    
    return res;
}

void UsuarioController::cancelarAlta()
{

    
}

void UsuarioController::reingresarEmail(string nuevoMail)
{
    Obj->mail = nuevoMail;
}

void UsuarioController::darAltaUsr()
{
    
    if (Obj->cargo == "null")
    {
         cout<<"Es huesped";
        Huesped *huesped = new Huesped(Obj->nombre, Obj->mail, Obj->pass, Obj->finger);
        huespedes.insert(std::pair<string, Huesped*>(Obj->mail, huesped));
    }
    else 
    {
          cout<<"Es Empleado";
        Hostal *aux= new Hostal();
        Empleado *empleado = new Empleado(Obj->nombre, Obj->mail, Obj->pass, Obj->cargo,aux );
        empleados.insert(std::pair<string, Empleado*>(Obj->mail, empleado));
        
       
    }
    // this->cancelarAlta();
}
string mailAConsultar;
void UsuarioController::seleccionarUsuario(string mail)
{
    mailAConsultar = mail;
}

void UsuarioController::obtenerInformacionUsuario()
{

    map<string, Huesped*>::iterator itr = huespedes.find(mailAConsultar);
    if (itr != huespedes.end())
    { // lo encontre es un huesped
      
        DataHuesped *aux = new DataHuesped();
        aux = itr->second->getDataUsuario();
        cout<<aux->getNombre()<<endl;
    }
    else
    {
        map<string, Empleado*>::iterator itr2 = empleados.find(mailAConsultar);
        if (itr2 != empleados.end())
        { // lo encontre es un huesped
            DataEmpleado *aux2 = new DataEmpleado();
            aux2 = itr2->second->getDataUsuario();
             cout<<aux2->getNombre()<<endl;
        }
    }
   
}


void UsuarioController::asignaReservas(Reserva *r, set<string> abuscar){

    for(set<string>::iterator it = abuscar.begin(); it != abuscar.end();++it){
        string current = *it;
      Huesped* nuevo=  huespedes.find(current)->second;
      nuevo->setReserva(r);
    }


}

// void UsuarioController::bajaReservaDeHuesp(int cod,set<string> huesp){
//      for(set<string>::iterator it = huesp.begin(); it != huesp.end();++it){
//         string current = *it;
//       Huesped* nuevo=  huespedes.find(current)->second;
//       nuevo->;
//     }

// }
void UsuarioController::MostrarReservasNoCanceladas(string huespedAConsultar){
    Huesped * h =huespedes.find(huespedAConsultar)->second;
     if(huespedes.find(huespedAConsultar)!= huespedes.end()){
    h->getReservasNoCanceladas();
     }

}