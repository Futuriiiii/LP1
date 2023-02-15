#pragma once
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo();
        float calcularArea();
        void lerAtributosArea();
        float altura;
        float base;
};
