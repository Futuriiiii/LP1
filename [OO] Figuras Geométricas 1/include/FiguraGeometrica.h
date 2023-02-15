#pragma once
#include <iostream>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(int tipo);
        float calcularArea();
        void lerAtributosArea();
        std::string getNome();

    protected:
        std::string nome;
        int tipo;
};

