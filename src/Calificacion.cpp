#include "../include/Calificacion.h"

// Calificacion::Calificacion(int id, int cal, string com){
//     this->idCalificacion = id;
//     this->calificacion = cal;
//     this->comentario = com;
// }

int Calificacion::getCalificacion(){
    return this->calificacion;
}

// string Calificacion::getComentario(){
//     return this->comentario;
// }

// set<Responde> Calificacion::getRespuestas(){
//     return this->Respuestas;
// }

// void Calificacion::setRespuestas(set<Responde> r){
//     this->Respuestas = r;
// }

// bool Calificacion::noRespuesta(){
//     return (this->Respuestas.empty());
// }

// DataComentario Calificacion::darDatos(){
//     DataComentario res(this->idCalificacion, this->comentario);
// }

// void Calificacion::responder(string respuesta){
// }

// int Calificacion::getIdCalificacion(){
//     return this->idCalificacion;
// }

// void Calificacion::borrarRespuestas(){
//     //llamar al destructor de Responde?
//     set<Responde>::iterator it;
//     for (it = this->Respuestas.begin(); it != this->Respuestas.end(); ++it){
//         this->Respuestas.erase(it);
//     }
// }

// Calificacion::~Calificacion(){
    
// }
