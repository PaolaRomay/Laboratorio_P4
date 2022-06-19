#include "../include/Fabrica.h"

Fabrica *Fabrica::instancia = NULL;

Fabrica *Fabrica::getInstance()
{
    if (instancia == NULL)
        instancia = new Fabrica();

    return instancia;
}

IUsuarioController *Fabrica::getInstanceUsuarioController()
{
    IUsuarioController *controlador = UsuarioController::getInstance();
    return controlador;
}

IHostalController *Fabrica::getInstanceHostalController()
{
    IHostalController *controlador = HostalController::getInstance();
    return controlador;
}

// IEstadiaController *Fabrica::getInstanceEstadiaController()
// {
//     IEstadiaController *controlador = EstadiaController::getInstance();
//     return controlador;
// }

IReservaController *Fabrica::getInstanceReservaController()
{
    IReservaController *controlador = ReservaController::getInstance();
    return controlador;
}

// IReloj *Fabrica::getInstanceReloj() //??
// {
//     IReloj *controlador = Reloj::getInstance();
//     return controlador;
// }
