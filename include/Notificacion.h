#ifndef NOTIFICACION
#define NOTIFICACION
#include <string>
using namespace std;


class Notificacion {
	private:
		string autor;
		string comentario;
		int puntaje;
	public:
		Notificacion(string, string,int);
		string getAutor();
		string getComentario();
		int getPuntaje();
		 ~Notificacion();
};
#endif
