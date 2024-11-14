//
// Created by gilju on 13/11/2024.
//

#include "Rombo.h"

Rombo::Rombo(double lado, double diagonalMay, double diagonalMen, int id) : lado(lado) , diagonalMay(diagonalMay), diagonalMen(diagonalMen)
, Figura(id, "Rombo")
{
    setArea();
    setPerimetro();
}

Rombo::~Rombo() = default;

void Rombo::setArea() {

    area = (diagonalMay*diagonalMen)/2;

}

void Rombo::setPerimetro() {

    perimetro = lado*4;
}

