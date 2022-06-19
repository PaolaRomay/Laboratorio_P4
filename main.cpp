#include "./include/Fabrica.h"
#include "./include/IEstadiaController.h"
#include "./include/IUsuarioController.h"
#include "./include/IReservaController.h"
#include "./include/IHostalController.h"
#include "./include/IReloj.h"

#include <iostream>
#include <set>
#include <string>

int main()
{
    Fabrica *fabrica = Fabrica::getInstance();
    // IEstadiaController  *estadia = fabrica->getInstanceEstadiaController();
    IUsuarioController *usuario = fabrica->getInstanceUsuarioController();
    IReservaController *reserva = fabrica->getInstanceReservaController();
    IHostalController *hostal = fabrica->getInstanceHostalController();
    // IReloj * reloj = fabrica->getInstanceReloj();
    int opcion;
    cout << "01: Alta de usuario" << endl; // FALTA QUE LIBERE BIEN LA MEMORIA//
    cout << "02: Alta de hostal" << endl; //HECHO
    cout << "03: Alta de habitacion" << endl;//HECHO
    cout << "04: Asignar empleado a hostal" << endl;//HECHO
    cout << "05: Realizar reserva" << endl;//HECHO
    cout << "06: Consultar top 3 de hostales" << endl;
    cout << "07: Registrar estadia" << endl;
    cout << "08: Finalizar Estadia" << endl;
    cout << "09: Calificar estadia" << endl;
    cout << "10: Comentar calificación" << endl;
    cout << "11: Consulta de Usuario" << endl;//HECHO
    cout << "12: Consulta de Hostal" << endl;
    cout << "13: Consulta de Reserva" << endl;//HECHO
    cout << "14: Consulta de Estadía" << endl;
    cout << "15: Baja de reserva" << endl;//Anda
    cout << "16: Suscribirse a notificaciones" << endl;
    cout << "17: Consulta de notificaciones" << endl;
    cout << "18: Eliminar Suscripción" << endl;
    cout << "19: Modificar Fecha del Sistema" << endl;
    cout << "20: Cargar datos" << endl;
    cout << "00: Salir" << endl;

    do
    {

        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            // ALTA DE USUARIO

            // ingresarDatosAlta

            string nombre;
            string emailUsr;
            string pass;

            cout << "Ingrese nombre del Usuario: ";
            cin >> nombre;
            cout << "Ingrese el email del Usuario: ";
            cin >> emailUsr;
            cout << "Ingrese la contraseña del Usuario: ";
            cin >> pass;
            usuario->ingresarDatosAlta(nombre, emailUsr, pass);

            // EL USUARIO ES FINGER O EMPLEADO ?
            cout << "----------------------------------------" << endl;
            cout << "Si el usuario es huesped digite 0" << endl;
            cout << "Si el usuario es empleado digite 1" << endl;
            cout << "----------------------------------------" << endl;

            int Emp_Hues;
            cin >> Emp_Hues;
            string tipoCargo; // adentro del switch no se puede declarar

            switch (Emp_Hues)
            {
            case 0:
                // ingresarDatosHuesped
                bool finger;
                cout << "Si el huesped es finger digite 1, de lo contrario digite 0: ";
                cin >> finger;
                cout<< finger;
                usuario->ingresarDatoHuesped(finger);
                break;
            case 1:
                // ingresarDatosEmpleado
                cout << "Ingrese el tipo de cargo del empleado: (, , ,)" << endl;
                cin >> tipoCargo;
                usuario->ingresarDatoEmpleado(tipoCargo);
                break;

            default:
                cout << "No ha digitado una opción correcta" << endl;
                break;
            }
            // si el email del usuario no es valido(recorro todos los usuarios
            // en el sistema y reviso el email), reingresar email o cancelar
            // cancelo liberando la memoria del sistema y terminando con el caso de uso

            //----------------------------------------------------------------------
            // usuario->darAltaUsr();
            map<string,Usuario*> usuarios = usuario->obtenerUsuariosRegistrados();
            
            bool sigoIntentando = true;
            int opcion;
            while (sigoIntentando)
            {

                try
                {
                    if (usuarios.find(emailUsr) == usuarios.end())
                    {
                        cout << "Si desea confirmar el ingreso seleccione 1, de lo contrario seleccione 0: ";
                        cin >> opcion;
                        switch (opcion)
                        {
                        case 1:
                            usuario->darAltaUsr();

                            cout << "Operacion realizada con éxito ";
                            sigoIntentando = false;

                            break;
                        case 0:
                            usuario->cancelarAlta();

                        default:

                            break;
                        }
                    }
                    else
                    {
                        throw(505);
                    }
                }
                catch (int mynum)
                {
                    cout << "email ya ingresado" << endl;
                    cout << "Si desea volver a ingresar un email seleccione 1, de lo contrario seleccione 0: ";
                    cin >> opcion;
                    switch (opcion)
                    {
                    case 1:

                        cout << "reingresar email: ";
                        cin >> emailUsr;
                        usuario->reingresarEmail(emailUsr);

                        break;
                    case 0:
                        sigoIntentando = false;

                    default:

                        break;
                    }
                }
            }
        }   
         break;

        case 2:
        {
            cout << "Ingresar nombre de hostal: " ;
            std::string nombre;
            std::getline(std::cin >> std::ws,nombre);
            cout << "Ingresar direccion de hostal: ";
            
            std::string direccion;
            std::getline(std::cin >> std::ws,direccion);
      
            cout << "Ingresar telefono de hostal: ";
            int telefono;
            cin >> telefono;
            hostal->ingresarDatosHostal(nombre, direccion, telefono);

            cout<<"SE DIO DE ALTA EL HOSTAL {"<<nombre<<"} CORRECTAMENTE";
        }
         break;
////////////////////////////////////ALTA DE HABITACION///////////////////////////////////
        case 3:
        {

            cout<<"Los hostales disponibles son: "<<endl;
            set<string> hostalesRegistrados = hostal->obtenerNombresHostalesRegistrados();
            string selecHostal;
           if(!hostalesRegistrados.empty()) {

            //seleccionar hostal para asignarle empleados despues

            cout<< "Seleccione el hostal al que se le desea asignar la habitacion: ";
            cin>>selecHostal;
         hostal->seleccionarHostal2(selecHostal);
            int num_hab;
            int precio;
            int capacidad;

            cout<<"Ingrese número de habitacion: ";
            cin>>num_hab;
            cout<<"\nIngrese el precio de la habitación: ";
            cin>>precio;
            cout<<"\nIngrese la capacidad de la habitación: ";
            cin>>capacidad;
            
            hostal->ingresarDatosHab(num_hab,precio,capacidad);

            hostal->darAltaHabitacion();
           }
            else{
            cout<<"Debe dar de alta un hostal "<<endl;
        }

        //IMPRIMIR EL HOSTAL CON LAS HABITACIONES QUE TIENE 
        



        






        }
        break;

        case 4:
        {

            /////////ASIGNAR EMPLEADO A HOSTAL////////////////////
            
            cout<<"HOSTALES REGISTRADOS: "<<endl;
            set<string> hostalesRegistrados = hostal->obtenerNombresHostalesRegistrados();

            //seleccionar hostal para asignarle empleados despues

            string selecHostal;
            cout<< "Seleccione el hostal que le desea asignar empleados: ";
            cin>>selecHostal;
            hostal->seleccionarHostal(selecHostal);

            set<DtEmpleado*> probando2 = hostal->obtenerEmpleadosNoAsignados();
            // cout<< probando2.begin()->getEmail();
            string emp;
            cout<<"ingrese el empleado a asignar: ";
            cin>>emp;
            string c = "admin";
            hostal->seleccionarEmpleado(emp,c);

             for(set<DtEmpleado*>::iterator it = probando2.begin(); it != probando2.end();++it){
                DtEmpleado *ti = *it;
                cout<< ti->getEmail();
                cout<<"-";
               cout<< ti->getCargo()<<endl;
             }

             hostal->confirmarAsignacion();

             map<string,Empleado*> empleados = usuario->obtenerEmpleadosRegistrados();

             for(map<string,Empleado*>::iterator it = empleados.begin(); it != empleados.end();++it){
                cout<<"entro";
                cout<<"--";
                cout<<it->second->getHostal()->getNombre();


             }
                






        }
        break;

        case 5:
        {
            //DataFecha inicio(13,2,2020,12);
            //DataFecha fin(14,2,2020,13);

            int ci_dia, ci_mes, ci_anio, ci_hora,co_dia,co_mes,co_anio,co_hora;


            cout<<"Ingrese los datos del check-in: "<<endl;
            cout<<"       Dia: ";
            cin>>ci_dia;
            cout<<"       Mes: ";
            cin>>ci_mes;
            cout<<"       Año: ";
            cin>>ci_anio;
            cout<<"       Hora: ";
            cin>>ci_hora;

            cout<<"Ingrese los datos del check-out: "<<endl;
            cout<<"       Dia: ";
            cin>>co_dia;
            cout<<"       Mes: ";
            cin>>co_mes;
            cout<<"       Año: ";
            cin>>co_anio;
            cout<<"       Hora: ";
            cin>>co_hora;

            DataFecha inicio(ci_dia,ci_mes,ci_anio,ci_hora);
            DataFecha fin(co_dia,co_mes,co_anio,co_hora);


               set<DtaHostal*> hosales=  reserva->obtenerHostalesRegistrados();
               //DtaHostal *current = *hosales.begin();

              cout<<"LOS HOSTALES REGISTRADOS SON:" << endl; 

               for(set<DtaHostal*>::iterator it= hosales.begin();it != hosales.end(); ++it){
                 DtaHostal *current = *it;
                 cout<< "-" << current->getNombre()<<endl;
               }

                // cout<<"Ingrese la fecha de checkIn que desea reservar: ";
                // cin<<inicio;
                // cout<<"Ingrese la fecha de checkOut: ";
                string hos;
                cout<<"Ingrese el hostal: ";
                cin>>hos;

                bool ind_grup;
                cout<<"Si la reserva es individual ingrese 1, de lo contrario ingrese 0: ";
                cin>>ind_grup;


                reserva->seleccionarHostal(hos,inicio,fin,ind_grup);
                cout<<"Habitaciones disponibles: "<<endl;
               set<int> resultado =  reserva->obtenerHabitacionesDisponibles();


if(!resultado.empty()){

                //////SELECCIONAR HABITACION///////////////
                int selec_hab;
                cout<<"Ingrese la habitacion en la que desea reservar: ";
                cin>>selec_hab;

                reserva->seleccionarHabitacion(selec_hab);

               map<string,Huesped*> huesp = usuario->obtenerHuespedesRegistrados();

                for(map<string,Huesped*>::iterator i= huesp.begin(); i != huesp.end();++i){
                    cout<<i->second->getNombre()<<endl;
                }



               ///////SELECCIONAR HUESPED////////
                int cant;
                string nombre_hues;
                set<string> seleccion;
                cout<<"Ingrese la cantidad de huespedes para la reserva: ";
                cin>>cant;

                for(int i= 0; i< cant;i++){
                    
                      cout<<"Ingrese el nombre del huesped "<<i<< " a seleccionar";
                      cin>>nombre_hues;
                      if(huesp.find(nombre_hues)!= huesp.end()){
                        cout<<"lo inserto???";
                        seleccion.insert(nombre_hues);
                      }
                      else{
                        cout<<"El usuario no es un huesped";

                      }
                }

                reserva->seleccionarHuesped(seleccion);
                reserva->confirmarAsignacion();
                
}
else{
    cout<<"No hay habitaciones disponibles para res ";
}

        }
        break;

        case 6:
        {
            // string nombre;
            // cin >> nombre;
            // DataDescripcion d = hostal->verDetalles(nombre);
            // cout << d.getPromedio();
        }
        break;

        case 7:
        {

            //REGISTRAR ESTADIA

                cout << "Los Hostales registrados son:" << endl;
                set<string> hostalesReg = reserva->obtenerNombresHostalesRegistrados();

                //MUESTRO HOSTALES REGISTRADOS
                set<string>::iterator it;
                for (it=hostalesReg.begin();it!=hostalesReg.end();++it){
                    cout << *it << endl;
                }
		
  	         //SELECCIONO HOSTAL
                cout << "Ingrese el nombre del Hostal seleccionado:"<<endl;
                string nombreHostal;
                cin >> nombreHostal;
             Hostal *res = reserva->seleccionarHostal3(nombreHostal);
               

		 //INGRESO EMAIL HUESPED
                cout << "Ingrese el email del huesped:" << endl;
                string emailHuesped;
                cin >> emailHuesped;
                Huesped* hues = reserva->ingresarEmailHuesped(emailHuesped);

                reserva->MostrarReservasNoCanceladas(hues);//ANDAAAAA
              
		 //MUESTRO RESERVAS
        //         set<int> reservasReg = reserva->listarReservas();
        //         set<int> :: iterator itR;
		//  int i=1;
        //         for (itR=reservasReg.begin();itR!=reservasReg.end();++itR){
        //             cout << "Identificador reserva"<< i << ": " << *itR << endl;
		//      i++;
        //         }
		  

        
                // reserva->obtenerReservas();

		/// SELECCIONO RESERVA
                cout << "Ingrese el identificador de la reserva: " << endl;
                int idReserva;
                cin >> idReserva;
                // Estadia(string, Huesped *, Reserva *, int, DataFecha, DataFecha, string);
                reserva->seleccionarReserva(nombreHostal,hues,idReserva,res);
        //TENEMOS HOSTAL, NOMBRE HUESPED, Y CODIGO RESERVA PARA PODER REGISTRAR ESTADIA




        }
        break;

        case 8:
        {
        }
        break;

        case 9:
        {
        }
        break;

        case 10:
        {
        }
        break;

        case 11:
        {
        map<string,Usuario*> users = usuario->obtenerUsuariosRegistrados();
        for(map<string,Usuario*>::iterator it = users.begin();it != users.end();++it){
            cout<<it->second->getEmail()<<endl;
        }   
        // {
            
        //     set<string> usuarios = usuario->obtenerUsuariosRegistrados();

        //     for (set<string>::iterator i = usuarios.begin(); i != usuarios.end(); ++i)
        //     {
        //         string current = *i;
        //         std::cout << current << "\n";
        //     }
            string basura;
            cout<<"Ingrese el usuario del cual quiere obtener la informacion:";
            cin>>basura;
            usuario->seleccionarUsuario(basura);
            
            usuario->obtenerInformacionUsuario();
       //}
        }
        break;

        case 12:
        {
            string hostalAselec;
            cout<<"Los hostales disponibles son:"<<endl;
            set<string> hostalesRegistrados = hostal->obtenerNombresHostalesRegistrados();

            for(set<string>::iterator it = hostalesRegistrados.begin();it != hostalesRegistrados.end();++it){

                string current = *it;
                cout<<current;

            }

            cout<<"Seleccione el hostal: "<<endl;
            cin>>hostalAselec;

            hostal->seleccionarHostal(hostalAselec);
            try
            {
           DataInfoBasicaHostal aux = hostal->obtenerInformacionBasicaHostal();
            cout<< aux;
                /* code */
            }
            catch(int err)
            {
               cout<<"No hay ningun hostal registrado"<<endl;
            }
            
        }
        break;
////////////////////////////////////////CONSULTA DE RESERVA///////////////////////////////

        case 13:
        {

            DataFecha inicio(13,2,2020,12);
            DataFecha fin(14,2,2020,13);
              set<DtaHostal*> hosales=  reserva->obtenerHostalesRegistrados();
               DtaHostal *current = *hosales.begin();
              cout<<"Los hostales registrados son:" << current->getNombre(); 

                reserva->seleccionarHostal("res",inicio,fin,true);
                reserva->obtenerReservas();

        }
        break;

        case 14:
        {
        }
        break;

        case 15:
        {
            // set<DtaHostal*> hosales=  reserva->obtenerHostalesRegistrados();
            // DtaHostal *current = *hosales.begin();
            // cout<<"Los hostales registrados son:" << current->getNombre(); 
           
             set<string> hostales=  reserva->obtenerNombresHostalesRegistrados();

            if(!hostales.empty()) {
                //seleccionar hostal para asignarle empleados despues
                cout<< "Seleccione el hostal asociado a la reserva que quiere dar de baja: ";
                string selecHostal;
                cin >> ws;
                getline(cin, selecHostal);
                reserva->seleccionarNombreHostal(selecHostal);
                reserva->obtenercodReservas();
                //FALTA MOSTRAR CI Y CO

                //el usuario selecciona el codigo despues que se lo mostramos
                cout<<"Ingrese el código de la reserva que quiere dar de baja: ";
                int codigo;
                cin>>codigo;
                bool confirma;
                cout<<"Si desea dar de baja digite 1, si desea cancelar digite 0: ";
                cin>>confirma;

                if (confirma){
                    //DAR DE BAJA
                    reserva->confirmarBajaDeReserva(codigo,selecHostal);

                }else{
                    //CANCELAR 
                    cout<<"Cancelado";
                }

                
            }



         }
        break;

        case 16:
        {
        }
        break;

        case 17:
        {
        }
        break;

        case 18:
        {
        }
        break;

        case 19:
        {
        }
        break;

        case 20:
        {
        }
        break;

        case 0:
        {
        }
        break;
        }
    } while (opcion != 0);
}