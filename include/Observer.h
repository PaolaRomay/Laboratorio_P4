#ifndef OBSERVER
#define OBSERVER
#include "Notificacion.h"

class Observer
{
public:
	virtual void Notificar(Notificacion n) = 0;
};

#endif
