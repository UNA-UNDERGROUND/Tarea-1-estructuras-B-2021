#include <iostream>
#include <vector>

int main() {
	std::vector<int> numeros;
	// reservamos 5 campos
	numeros.reserve(5);
	int num = 0;
	while (std::cin >> num) {
		// push_back redimensiona automaticamente
		numeros.push_back(num);
	}

	for (size_t i = 0; i < numeros.size(); i += 5) {
		for (size_t n = i; n < (i + 5) && n < numeros.size(); n++) {
			std::cout << numeros[n];
			if (n != (i + 4) && n < (numeros.size() - 1)) {
				std::cout << ",";
			}
		}
		std::cout << "\n";
	}
}