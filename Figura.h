//
// Created by gilju on 12/11/2024.
//

#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>



class Figura {

private:
    std::string nombre;
    int id;

protected:
    double area{};
    double perimetro{};

public:
    Figura(int id_, std::string nombre_);
    virtual ~Figura();
    void virtual setArea(){};
    void virtual  setPerimetro(){};
    void imprimirInfo();
    double operator+(Figura& x);

};



#endif //FIGURA_H
