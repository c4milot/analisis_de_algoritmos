#include <iostream>
#include "brute_force.hpp"
#include "divide_and_conquer.hpp"

// para compilar:
// g++ main.cpp brute_force.cpp divide_and_conquer.cpp -o main -std=c++20
// para ejecutar
// ./main

int main() {

    // Vector que almacena los puntos
    std::vector<std::pair<int, int>> dots = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    
    double minDistance_BF = minDist_BF(dots);
    double minDistance_DQ = minDist_DQ(dots);

    std::cout << "Distancia minima (Brute Force): " << minDistance_BF << std::endl;
    std::cout << "Distancia minima (Divide and Conquer): " << minDistance_DQ << std::endl;

    return 0;
}