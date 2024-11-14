#include <iostream>
#include <vector>
#include <limits>
#include <cstdlib>


#include "Circulo.h"
#include "Figura.h"
#include "Rectangulo.h"
#include "Rombo.h"

void agregarFigura(std::vector<Figura*>& figuras, int& id);

int main() {

    std::vector<Figura*> figuras;
    int id = 0;

    while (true) {

        int opcion;


        std::cout << "********\tCalculadora de Perimeto y Area de figuras geometricas\t********" << std::endl;
        std::cout << "1.Agregar Figura." << std::endl;
        std::cout << "2.Mostrar Figuras Almacenadas." << std::endl;
        std::cout << "3.Sumar area de 2 figuras" << std::endl;
        std::cout << "4.SALIR." << std::endl;

        while (true) {
            std::cin >> opcion;

            if (std::cin.fail() || (opcion > 4 || opcion < 1)) {

                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Ingrese una opcion valida\n";
                continue;
            }
            break;
        }



        switch (opcion) {

            case 1:

                agregarFigura(figuras, id);
                break;

            case 2:

                for(const auto figura : figuras) {
                    figura->imprimirInfo();
                };
                break;

            case 3:

                int p1, p2;
                double resultado;

                std::cout << "Ingrese el indice de la Figura #1: ";std::cin >> p1;
                std::cout << "Ingrese el indice de la Figura #2: ";std::cin >> p2;

                resultado = *figuras.at(p1) + *figuras.at(p2);

                std::cout << "Resultado: " << resultado << std::endl;
                break;

            case 4:
                system("pause");exit(0);break;
        }
    }
}

void agregarFigura(std::vector<Figura*>& figuras, int& id) {

    std::cout << "Seleccione la figura:" << std::endl;
    std::cout << "1.Rectangulo" << std::endl;
    std::cout << "2.Circulo" << std::endl;
    std::cout << "3.Rombo" << std::endl;

    int figura{};

    while (true) {
        std::cin >> figura;

        if (std::cin.fail() || (figura > 3 || figura < 1)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ingrese una opcion valida.\n";
            continue;
        }

        break;
    }



    switch (figura) {
        case 1:
            double ancho;
            double largo;
            std::cout << "Ingrese el ancho:"; std::cin >> ancho;
            std::cout << "Ingrese el largo:"; std::cin >> largo;
            figuras.push_back(new Rectangulo(ancho, largo, id));
            ++id;
            break;
        case 2:
            double radio;
            std::cout << "Ingrese el radio:"; std::cin >> radio;
            figuras.push_back(new Circulo(radio, id));
            id++;
            break;
        case 3:
            double dMay, dMen, lado;
            std::cout << "Ingrese la Diagonal Mayor: "; std::cin >> dMay;
            std::cout << "Ingrese la Diagonal Menor: "; std::cin >> dMen;
            std::cout << "Ingrese el lado: "; std::cin >> lado;
            figuras.push_back(new Rombo(lado, dMay, dMen, id));
            ++id;
            break;

    }

}