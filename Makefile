CC = g++
CFLAGS = -g -w -Wall

main: main.o HostalController.o Fabrica.o Hostal.o UsuarioController.o Usuario.o Huesped.o Empleado.o DataUsuario.o DataEmpleado.o DataHuesped.o DtEmpleado.o Habitacion.o DtDescripcion.o DataDescripcion.o DataHabitacion.o DataInfoBasicaHostal.o DatasHostal.o ReservaController.o DtaHostal.o DataFecha.o Reserva.o ReservaIndividual.o ReservaGrupal.o
	$(CC) $(CFLAGS) -o main main.o HostalController.o Fabrica.o Hostal.o UsuarioController.o Usuario.o Huesped.o Empleado.o DataUsuario.o DataEmpleado.o DataHuesped.o DtEmpleado.o Habitacion.o DtDescripcion.o DataDescripcion.o DataHabitacion.o DataInfoBasicaHostal.o DatasHostal.o ReservaController.o DtaHostal.o DataFecha.o Reserva.o ReservaIndividual.o ReservaGrupal.o

Hostal.o: include/Hostal.h	src/Hostal.cpp
	$(CC) $(CFLAGS) -c src/Hostal.cpp

Usuario.o : include/Usuario.h src/Usuario.cpp 
	$(CC) $(CFLAGS) -c src/Usuario.cpp

DataUsuario.o: dataTypes/DataUsuario.h dataTypes/src/DataUsuario.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataUsuario.cpp

Habitacion.o: include/Habitacion.h src/Habitacion.cpp
	$(CC) $(CFLAGS) -c src/Habitacion.cpp

DataEmpleado.o: dataTypes/DataEmpleado.h dataTypes/src/DataEmpleado.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataEmpleado.cpp

DataHabitacion.o: dataTypes/DataHabitacion.h dataTypes/src/DataHabitacion.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataHabitacion.cpp

DtEmpleado.o: dataTypes/DtEmpleado.h dataTypes/src/DtEmpleado.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DtEmpleado.cpp

DtDescripcion.o: dataTypes/DtDescripcion.h dataTypes/src/DtDescripcion.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DtDescripcion.cpp

DataDescripcion.o: dataTypes/DataDescripcion.h dataTypes/src/DataDescripcion.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataDescripcion.cpp

DataHuesped.o: dataTypes/DataHuesped.h dataTypes/src/DataHuesped.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataHuesped.cpp

DataFecha.o: dataTypes/DataFecha.h dataTypes/src/DataFecha.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataFecha.cpp

DatasHostal.o: dataTypes/DatasHostal.h dataTypes/src/DatasHostal.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DatasHostal.cpp

DataInfoBasicaHostal.o: dataTypes/DataInfoBasicaHostal.h dataTypes/src/DataInfoBasicaHostal.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DataInfoBasicaHostal.cpp

Huesped.o : include/Huesped.h  src/Huesped.cpp
	$(CC) $(CFLAGS) -c src/Huesped.cpp

ReservaController.o: include/IReservaController.h include/ReservaController.h src/ReservaController.cpp
	$(CC) $(CFLAGS) -c src/ReservaController.cpp

Reserva.o : include/Reserva.h  src/Reserva.cpp
	$(CC) $(CFLAGS) -c src/Reserva.cpp

ReservaIndividual.o : include/ReservaIndividual.h  src/ReservaIndividual.cpp
	$(CC) $(CFLAGS) -c src/ReservaIndividual.cpp

ReservaGrupal.o : include/ReservaGrupal.h  src/ReservaGrupal.cpp
	$(CC) $(CFLAGS) -c src/ReservaGrupal.cpp

DtaHostal.o: dataTypes/DtaHostal.h dataTypes/src/DtaHostal.cpp
	$(CC) $(CFLAGS) -c dataTypes/src/DtaHostal.cpp

Empleado.o : include/Empleado.h src/Empleado.cpp
	$(CC) $(CFLAGS) -c src/Empleado.cpp

HostalController.o: include/IHostalController.h include/HostalController.h src/HostalController.cpp
	$(CC) $(CFLAGS) -c src/HostalController.cpp

UsuarioController.o: include/IUsuarioController.h include/UsuarioController.h src/UsuarioController.cpp
	$(CC) $(CFLAGS) -c src/UsuarioController.cpp

Fabrica.o: include/Fabrica.h src/Fabrica.cpp
	$(CC) $(CFLAGS) -c src/Fabrica.cpp

clean:
	rm -f core *.o