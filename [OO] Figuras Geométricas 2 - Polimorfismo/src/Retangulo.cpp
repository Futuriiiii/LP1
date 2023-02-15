#include "Retangulo.h"

Retangulo::Retangulo() : FiguraGeometrica(2)
{
    nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return this->base*this->altura;
}

void Retangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}
