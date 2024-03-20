#include <iostream>
#include <string>
#include <unordered_set>

std::string eliminarRepetidos(const std::string &cadena) {
    std::unordered_set<char> caracteres;
    std::string resultado;
    for (char c : cadena) {
        if (caracteres.find(c) == caracteres.end()) {
            resultado += c;
            caracteres.insert(c);
        }
    }
    return resultado;
}

void problema7() {
    std::string cadena = "bananas";
    std::cout << "Original: " << cadena << ". Sin repetidos: " << eliminarRepetidos(cadena) << std::endl;
}
