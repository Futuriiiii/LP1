#include "Triangulo.h"

Triangulo::Triangulo()
    :FiguraGeometrica(3){

}

float Triangulo::calcularArea(){
    return (this->base*this->altura)/2.0;
}
void Triangulo::lerAtributosArea(){
    std::cin >> base;
    std::cin >> altura;
}

std::string Triangulo::getNome(){
    return "Triângulo";
}
