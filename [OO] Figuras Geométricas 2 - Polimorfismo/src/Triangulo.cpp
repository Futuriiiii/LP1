#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica(3)
{
    nome = "Tri�ngulo";
}

float Triangulo::calcularArea(){
    return (this->base*this->altura)/2.0;
}

void Triangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}
