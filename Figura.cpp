//
// Created by gilju on 12/11/2024.
//

#include "Figura.h"

Figura::Figura(int id_, std::string nombre_):id(id_), nombre(nombre_){}

Figura::~Figura() = default;

void Figura::imprimirInfo() {
    std::cout << "-------------------------------\n";
    std::cout << nombre << " #" << id << std::endl;
    std::cout << "Area: " << area << '\n' << "Perimetro: " << perimetro << std::endl;
    std::cout << "-------------------------------\n";
}

double Figura::operator+(Figura &x) {
    return area + x.area;
}


