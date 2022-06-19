#ifndef HOSTALCONTROLLER
#define HOSTALCONTROLLER

#include <string>
#include <set>
#include <vector>
#include "../dataTypes/DataEstadia.h"
#include "../dataTypes/DataHostal.h"
#include "../dataTypes/DataComentario.h"
#include "../dataTypes/DataEmpleado.h"
#include "../include/Cargo.h"
#include "../dataTypes/DataDescripcion.h"
#include "../include/Fabrica.h"

// vector<string> consultaTop3Hostales(){
//     Fabrica *fabrica = Fabrica::getInstance();
//     IReservaController *r = fabrica->getInstanceReservaController();
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
//     resultado.push_back(tercero.getNombre()); //ARREGLO???
// }

// DataDescripcion verDetalles(string nombreHostal){
//     //encontrar el hostal h
//     //set<string> cal = h.getCalificaciones()
//     //set<string> com = h.getComentarios()
//     //promedio le paso algo invalido tipo -1
//     //habitacion dejo en blanco
//     DataDescripcion d = DataDescripcion();
//     return d;
// }

#endif HOSTALCONTROLLER