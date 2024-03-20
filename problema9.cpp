#include <iostream>
#include <string>
#include <sstream>

int sumaSegmentos(const std::string &cadena, int n) {
    int suma = 0, numero;
    for (size_t i = 0; i < cadena.length(); i += n) {
        std::string segmento = cadena.substr(i, n);
        std::istringstream(segmento) >> numero;
        suma += numero;
    }
    return suma;
}

void problema9() {
    std::string cadena = "87512395";
    int n = 3;
    // Agregar ceros al inicio si es necesario
    int cerosNecesarios = n - cadena.length() % n;
    if (cerosNecesarios < n) {
        cadena = std::string(cerosNecesarios, '0') + cadena;
    }

    std::cout << "Original: " << cadena << ". Suma: " << sumaSegmentos(cadena, n) << std::endl;
}
