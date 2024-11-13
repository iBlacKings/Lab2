//
// Created by gilju on 13/11/2024.
//

#include "Circulo.h"


Circulo::Circulo(int radio, int id) : radio(radio), Figura(id, "Circulo") {
        setArea();
        setPerimetro();
}


void Circulo::setPerimetro() {
        perimetro = 2 * 3.1416 * radio;
}

void Circulo::setArea() {
        area = 3.1416 * radio * radio;
}
