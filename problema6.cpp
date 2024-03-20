#include <iostream>
#include <string>
#include <cctype>

void problema6() {
    std::string cadena;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    std::string cadenaMayuscula = cadena;
    for (char &c : cadenaMayuscula) {
        c = std::toupper(c);
    }

    std::cout << "Original: " << cadena << ". En mayúscula: " << cadenaMayuscula << std::endl;
}
