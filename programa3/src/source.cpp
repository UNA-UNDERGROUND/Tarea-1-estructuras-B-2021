// Source.cpp
// Archivo base para el Ejercicio #3 de la Tarea #1

#include <mensaje.hpp>
#include <iostream>

int main() {
	Mensaje nuevo("Estructuras de datos");
	Mensaje otro(nuevo);

	// Imprime el primer mensaje
	std::string* s = nuevo.GetMensaje();
	std::cout << *s << "\n";

	// Imprime el segundo mensaje
	s = otro.GetMensaje();
	std::cout << *s << "\n";

}