#include "../DataComentario.h"
#include <iostream>
DataComentario::DataComentario(int id, string texto){
    this->idComentario = id;
    this->comentario = texto;
}

int DataComentario::getIdComentario(){
    return this->idComentario;
}

string DataComentario::getComentario(){
    return this->comentario;
}


ostream &operator<< (ostream &os, DataComentario* comment) {

	os 	<< "----------------------------------------\n"
		<< "ID del comentario: " << comment->getIdComentario() << endl
		<< "Comentario: " << comment->getComentario() << endl;
	os	<< "----------------------------------------\n";

	return os;
}
