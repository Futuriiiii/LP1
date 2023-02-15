#pragma once
#include "FiguraGeometrica.h"


class Retangulo : public FiguraGeometrica
{
    public:
        Retangulo();
        float calcularArea();
        void lerAtributosArea();
        std::string getNome();
        float altura;
        float base;
};

