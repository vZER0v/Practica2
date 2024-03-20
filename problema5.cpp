#include <iostream>
#include <string>

void enteroACadena(int numero, std::string &cadena) {
    cadena = std::to_string(numero);
}

void problema5() {
    int numero = 123;
    std::string cadena;
    enteroACadena(numero, cadena);
    std::cout << cadena << std::endl;
}
