#include "Circulo.h"
#define PI 3.14

Circulo::Circulo() : FiguraGeometrica(4)
{
    nome = "C�rculo";
}

float Circulo::calcularArea(){
    return (this->raio*this->raio)*PI;
}

void Circulo::lerAtributosArea(){
    cin >> raio;
}
