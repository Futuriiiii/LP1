#pragma once
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado();
        float calcularArea();
        void lerAtributosArea();
        float lado;
};
