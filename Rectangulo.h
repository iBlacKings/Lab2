//
// Created by gilju on 12/11/2024.
//

#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"


class Rectangulo : public Figura {

private:
    double largo;
    double ancho;

public:

    Rectangulo(double ancho_, double largo_, int id);
    ~Rectangulo() override;

    void setArea() override;
    void setPerimetro() override;
};



#endif //RECTANGULO_H
