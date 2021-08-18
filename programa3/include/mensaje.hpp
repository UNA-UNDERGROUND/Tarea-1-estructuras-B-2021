#ifndef MENSAJE_H
#define MENSAJE_H

#include <string>

class Mensaje {
  public:
	// Constructor con parámetro
	Mensaje(std::string s) : ptr_mensaje{new std::string{s}} {}
	// Constructor de copia
	Mensaje(const Mensaje &m)
	    : ptr_mensaje{m.ptr_mensaje ? new std::string(*m.ptr_mensaje) : nullptr}
	{}
	// Destructor
	~Mensaje() { delete ptr_mensaje; }

	// Retorna un apuntador al mensaje
	std::string *GetMensaje() { return ptr_mensaje; }

  private:
	std::string *ptr_mensaje{nullptr};
};

#endif