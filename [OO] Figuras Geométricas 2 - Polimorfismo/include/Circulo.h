#pragma once
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        float calcularArea();
        void lerAtributosArea();
        float raio;
};
