#include <iostream>
#include <array>
#include <random>
#include <map>

void problema2() {
    std::array<char, 200> letras;
    std::map<char, int> conteo;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib('A', 'Z');

    for (char &letra : letras) {
        letra = distrib(gen);
        std::cout << letra;
        conteo[letra]++;
    }
    std::cout << std::endl;

    for (const auto &par : conteo) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
}
