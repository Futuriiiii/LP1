#pragma once
#include <iostream>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(int t);
        float virtual calcularArea() = 0;
        void virtual lerAtributosArea() = 0;
        string getNome();

    protected:
        string nome;
        int tipo;
};
