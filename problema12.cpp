#include <iostream>
#include <vector>

bool esCuadradoMagico(const std::vector<std::vector<int>>& matriz) {
    const int tam = matriz.size();
    int suma = 0;

    // Suma de la primera fila para referencia
    for (int num : matriz[0]) {
        suma += num;
    }

    // Suma de filas
    for (const auto& fila : matriz) {
        int sumaFila = 0;
        for (int num : fila) {
            sumaFila += num;
        }
        if (sumaFila != suma) return false;
    }

    // Suma de columnas
    for (int i = 0; i < tam; ++i) {
        int sumaCol = 0;
        for (int j = 0; j < tam; ++j) {
            sumaCol += matriz[j][i];
        }
        if (sumaCol != suma) return false;
    }

    // Suma de diagonales
    int sumaDiag1 = 0, sumaDiag2 = 0;
    for (int i = 0; i < tam; ++i) {
        sumaDiag1 += matriz[i][i];
        sumaDiag2 += matriz[i][tam - i - 1];
    }
    if (sumaDiag1 != suma || sumaDiag2 != suma) return false;

    return true;
}

void problema12() {
    int tam;
    std::cout << "Ingrese el tamanio de la matriz: ";
    std::cin >> tam;
    std::vector<std::vector<int>> matriz(tam, std::vector<int>(tam));

    std::cout << "Ingrese los elementos de la matriz:\n";
    for (auto& fila : matriz) {
        for (auto& num : fila) {
            std::cin >> num;
        }
    }

    std::cout << "La matriz ingresada es:\n";
    for (const auto& fila : matriz) {
        for (int num : fila) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    if (esCuadradoMagico(matriz)) {
        std::cout << "La matriz es un cuadrado mágico.\n";
    } else {
        std::cout << "La matriz no es un cuadrado mágico.\n";
    }

}
