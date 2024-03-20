#include <iostream>
#include <array>

using namespace std;
void problema1() {
    const std::array<int, 10> denominaciones = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidad;
    std::cout << "Ingrese la cantidad de dinero: ";
    std::cin >> cantidad;

    for (int den : denominaciones) {
        int numero = cantidad / den;
        cantidad -= numero * den;
        std::cout << den << ": " << numero << std::endl;
    }

    if (cantidad > 0) {
        std::cout << "Faltante: " << cantidad << std::endl;
    }
}
