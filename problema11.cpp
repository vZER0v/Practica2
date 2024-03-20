#include <iostream>
#include <vector>

const int FILAS = 15;
const int ASIENTOS = 20;

// Función para mostrar los asientos
void mostrarAsientos(const std::vector<std::vector<bool>>& cine) {
    std::cout << "  ";
    for (int i = 1; i <= ASIENTOS; ++i) {
        std::cout << (i < 10 ? "0" : "") << i << " ";
    }
    std::cout << "\n";

    char filaLetra = 'A';
    for (const auto& fila : cine) {
        std::cout << filaLetra++ << " ";
        for (bool asiento : fila) {
            std::cout << (asiento ? "+" : "-") << "  ";
        }
        std::cout << "\n";
    }
}

// Función para reservar o cancelar un asiento
void gestionarAsiento(std::vector<std::vector<bool>>& cine, char filaLetra, int numeroAsiento, bool reservar) {
    int fila = filaLetra - 'A';
    if (fila >= 0 && fila < FILAS && numeroAsiento > 0 && numeroAsiento <= ASIENTOS) {
        cine[fila][numeroAsiento - 1] = reservar;
    } else {
        std::cout << "Fila o número de asiento inválido.\n";
    }
}

void problema11() {
    std::vector<std::vector<bool>> cine(FILAS, std::vector<bool>(ASIENTOS, false));
    char filaLetra;
    int numeroAsiento;
    char accion;
    bool continuar = true;

    while (continuar) {
        mostrarAsientos(cine);
        std::cout << "Ingrese R para reservar, C para cancelar, M para mostrar o Q para salir: ";
        std::cin >> accion;

        switch (accion) {
            case 'R':
            case 'C':
                std::cout << "Ingrese la fila (letra A-O) y el número de asiento (1-20): ";
                std::cin >> filaLetra >> numeroAsiento;
                gestionarAsiento(cine, filaLetra, numeroAsiento, accion == 'R');
                break;
            case 'M':
                mostrarAsientos(cine);
                break;
            case 'Q':
                continuar = false;
                break;
            default:
                std::cout << "Acción no reconocida.\n";
        }
    }

}
