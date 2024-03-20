#include <iostream>
#include <string>

bool cadenasIguales(const std::string &a, const std::string &b) {
    return a == b;
}

void problema3() {
    std::string cadena1 = "Hola";
    std::string cadena2 = "Hola";
    std::cout << std::boolalpha << cadenasIguales(cadena1, cadena2) << std::endl;
}
