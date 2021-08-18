#include <cctype>
#include <fstream>
#include <iostream>
#include <locale>
#include <string>

inline bool isChar(char chr) { return (chr & 0xc0) != 0x80; }

int main() {
	bool conteo = true; // si contamos o no
	bool vacio = true;
	size_t palabras = 0;
	size_t espacios = 0;
	size_t letras = 0;
	size_t lineas = 0;
	std::string nombre_archivo = "texto.txt";
	std::ifstream archivo(nombre_archivo,
	                      std::ifstream::in | std::ifstream::binary);

	if (archivo) {
		if (!archivo.eof()) {
			vacio = false;
		}
		char chr = '\0';
		// lo ideal sería moverlo a un buffer previamente
		while (archivo.get(chr)) {
			if (isChar(chr)) {
				// nueva linea
				if (chr == '\n') {
					lineas++;
					if (conteo) {
						palabras++;
					}
					conteo = true;
				}
				// espacios
				else if (std::isspace(chr)) {
					letras++;
					if (conteo) {
						palabras++;
						espacios++;
						conteo = false;
					}
				}
				// letras
				else {
					letras++;
					if (!conteo) {
						conteo = true;
					}
				}
			}
		}
	}

	if (!vacio) {
		lineas++;
		if (conteo) {
			palabras++;
		}
	}

	std::cout << lineas << " " << palabras << " " << letras << "\n";
}
