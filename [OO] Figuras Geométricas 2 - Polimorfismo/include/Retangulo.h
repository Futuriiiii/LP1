#pragma once
#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        float calcularArea();
        void lerAtributosArea();
        float altura;
        float base;
};
