#include <iostream>
#include <vector>

bool esEstrella(const std::vector<std::vector<int>>& galaxia, int i, int j) {
    // Sumar el valor del punto y los de sus vecinos horizontales y verticales inmediatos.
    int suma = galaxia[i][j] + galaxia[i-1][j] + galaxia[i+1][j] + galaxia[i][j-1] + galaxia[i][j+1];
    return suma > 30;  // El valor debe ser mayor que 5 * 6 = 30 para cumplir con la condición de ser una estrella.
}

int contarEstrellas(const std::vector<std::vector<int>>& galaxia) {
    int contadorEstrellas = 0;
    // Utilizamos size_t para evitar advertencias de comparación entre signos diferentes
    for (size_t i = 1; i < galaxia.size() - 1; ++i) {
        for (size_t j = 1; j < galaxia[i].size() - 1; ++j) {
            if (esEstrella(galaxia, i, j)) {
                contadorEstrellas++;
            }
        }
    }
    return contadorEstrellas;
}

void problema13() {
    // Definición de la matriz de la galaxia con la representación digital de la imagen.
    std::vector<std::vector<int>> galaxia = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}
    };

    // Llamada a la función para contar las estrellas.
    int numeroEstrellas = contarEstrellas(galaxia);
    std::cout << "Número de estrellas encontradas: " << numeroEstrellas << std::endl;
}
