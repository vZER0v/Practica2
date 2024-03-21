#include <iostream>
#include <vector>
#include <algorithm> // Para std::reverse

// Función para imprimir la matriz
void imprimirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int num : fila) {
            std::cout << num << '\t';
        }
        std::cout << '\n';
    }
}

// Función para rotar la matriz 90 grados
std::vector<std::vector<int>> rotar90Grados(const std::vector<std::vector<int>>& matriz) {
    std::vector<std::vector<int>> rotada = matriz;
    int n = rotada.size();
    // Transponer la matriz
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            std::swap(rotada[i][j], rotada[j][i]);
        }
    }
    // Invertir cada fila
    for (auto& fila : rotada) {
        std::reverse(fila.begin(), fila.end());
    }
    return rotada;
}


void problema14() {
    // Llenar la matriz 5x5 con los números del 1 al 25
    std::vector<std::vector<int>> matriz(5, std::vector<int>(5));
    int contador = 1;
    for (auto& fila : matriz) {
        for (auto& num : fila) {
            num = contador++;
        }
    }

    // Imprimir la matriz original
    std::cout << "Matriz original:\n";
    imprimirMatriz(matriz);

    // Rotar e imprimir la matriz en 90, 180 y 270 grados
    std::vector<std::vector<int>> rotada90 = rotar90Grados(matriz);
    std::cout << "\nMatriz rotada 90 grados:\n";
    imprimirMatriz(rotada90);

    std::vector<std::vector<int>> rotada180 = rotar90Grados(rotada90);
    std::cout << "\nMatriz rotada 180 grados:\n";
    imprimirMatriz(rotada180);

    std::vector<std::vector<int>> rotada270 = rotar90Grados(rotada180);
    std::cout << "\nMatriz rotada 270 grados:\n";
    imprimirMatriz(rotada270);

}
