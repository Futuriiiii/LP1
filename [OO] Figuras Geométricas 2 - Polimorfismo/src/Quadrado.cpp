#include "Quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica(1)
{
    nome = "Quadrado";
}

float Quadrado::calcularArea(){
    return this->lado*this->lado;
}

void Quadrado::lerAtributosArea(){
    cin >> lado;
}
