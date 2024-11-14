cmake_minimum_required(VERSION 3.29)
project(Lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab2 main.cpp
        Figura.h
        Figura.cpp
        Rectangulo.h
        Rectangulo.cpp
        Circulo.h
        Circulo.cpp
        Rombo.h
        Rombo.cpp
)
