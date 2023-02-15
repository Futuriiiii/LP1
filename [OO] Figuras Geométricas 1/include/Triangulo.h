#pragma once
#include "FiguraGeometrica.h"


class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        float calcularArea();
        void lerAtributosArea();
        std::string getNome();
        float altura;
        float base;
};
