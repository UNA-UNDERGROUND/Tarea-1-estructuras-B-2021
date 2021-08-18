#include <iostream>
#include <string>
#include <utility> // std::swap

int main() {
	using std::string;

	string *a = new string("soy el string A");
	string *b = new string("soy el string B");

	std::cout << "a[0x" << a << "] = " << *a << "\n";
	std::cout << "b[0x" << b << "] = " << *b << "\n";

	std::swap(a, b);

	std::cout << "a[0x" << a << "] = " << *a << "\n";
	std::cout << "b[0x" << b << "] = " << *b << "\n";
}
