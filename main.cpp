#include <iostream>
#include <string>
#include <array>
#include <random>
#include <map>
#include <unordered_set>
#include <cctype>
#include <sstream>

// Aquí van las declaraciones de todas tus funciones
void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();
void problema7();
void problema8();
void problema9();
void problema10();
void problema11();
void problema12();
// ... otros problemas ...

int main() {
    int seleccion;
    do {
        std::cout << "Seleccione el numero de problema (1-10) o 0 para salir: ";
        std::cin >> seleccion;

        switch (seleccion) {
            case 1: problema1(); break;
            case 2: problema2(); break;
            case 3: problema3(); break;
            case 4: problema4(); break;
            case 5: problema5(); break;
            case 6: problema6(); break;
            case 7: problema7(); break;
            case 8: problema8(); break;
            case 9: problema9(); break;
            case 10: problema10(); break;
            case 11: problema11(); break;
            case 12: problema12(); break;
            // ... otros casos ...
            default: if (seleccion != 0) std::cout << "Opcion no valida.\n";
        }
    } while (seleccion != 0);

    return 0;
}
