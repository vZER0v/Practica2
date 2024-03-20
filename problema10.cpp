#include <iostream>
#include <string>
#include <map>

int romanoAArabigo(const std::string &romano) {
    std::map<char, int> valores = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int total = 0;
    for (size_t i = 0; i < romano.length(); i++) {
        if (i + 1 < romano.length() && valores[romano[i]] < valores[romano[i + 1]]) {
            total -= valores[romano[i]];
        } else {
            total += valores[romano[i]];
        }
    }
    return total;
}

void problema10() {
    std::string romano = "DCLXVI";
    std::cout << "El número ingresado fue: " << romano << " Que corresponde a: " << romanoAArabigo(romano) << std::endl;
}
