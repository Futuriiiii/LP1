#pragma once
#include "FiguraGeometrica.h"


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        float calcularArea();
        void lerAtributosArea();
        std::string getNome();
        int lado;
};

