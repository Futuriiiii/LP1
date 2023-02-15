#include "Retangulo.h"

Retangulo::Retangulo() : FiguraGeometrica(2)
{
    nome = "Ret�ngulo";
}

float Retangulo::calcularArea(){
    return this->base*this->altura;
}

void Retangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}
