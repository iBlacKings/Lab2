//
// Created by gilju on 12/11/2024.
//

#include "Rectangulo.h"


Rectangulo::Rectangulo(double ancho_, double largo_, int id) : largo(largo_), ancho(ancho_), Figura(id, "Rectangulo") {
    setArea();
    setPerimetro();
}

Rectangulo::~Rectangulo() = default;

void Rectangulo::setArea() {
    area = largo * ancho;
}

void Rectangulo::setPerimetro() {
    perimetro = 2*largo + 2*ancho;
}

