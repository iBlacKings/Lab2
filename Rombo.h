//
// Created by gilju on 13/11/2024.
//

#ifndef ROMBO_H
#define ROMBO_H
#include "Figura.h"


class Rombo : public Figura{

private:

    double lado;
    double diagonalMay;
    double diagonalMen;

public:

    Rombo(double lado, double diagonalMay, double diagonalMen, int id);
    ~Rombo();

    void setArea() override;
    void setPerimetro() override;


};



#endif //ROMBO_H
