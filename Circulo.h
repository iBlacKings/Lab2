//
// Created by gilju on 13/11/2024.
//

#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"


class Circulo:public Figura{
private:
    int radio;

public:
    Circulo(int radio, int id);

    void setArea() override;
    void setPerimetro() override;

};



#endif //CIRCULO_H
