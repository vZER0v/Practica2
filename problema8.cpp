#include <iostream>
#include <string>
#include <cctype>

void problema8() {
    std::string cadena, letras, numeros;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    for (char c : cadena) {
        if (isdigit(c)) {
            numeros += c;
        } else {
            letras += c;
        }
    }

    std::cout << "Original: " << cadena << "\nTexto: " << letras << ". Numero: " << numeros << std::endl;
}
