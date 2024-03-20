#include <iostream>
#include <string>

int cadenaAEntero(const std::string &cadena) {
    return std::stoi(cadena);
}

void problema4() {
    std::string cadena = "123";
    std::cout << cadenaAEntero(cadena) << std::endl;
}
