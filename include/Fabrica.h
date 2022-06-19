#ifndef FABRICA
#define FABRICA
#include "UsuarioController.h"
#include "HostalController.h"
#include "ReservaController.h"
#include "EstadiaController.h"
#include "Reloj.h"
#include "IUsuarioController.h"
#include "IHostalController.h"
#include "IReservaController.h"
#include "IEstadiaController.h"
#include "IReloj.h"

class IUsuarioController;
class IHostalController;
class IEstadiaController;
class IReservaController;
class IReloj;

class Fabrica
{
private:
	static Fabrica *instancia;

public:
	static Fabrica *getInstance();
	IUsuarioController *getInstanceUsuarioController();
	IHostalController *getInstanceHostalController();
	IEstadiaController *getInstanceEstadiaController();
	IReservaController *getInstanceReservaController();
	IReloj *getInstanceReloj();
};

#endif