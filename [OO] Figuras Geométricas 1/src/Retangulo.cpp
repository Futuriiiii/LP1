#include "Retangulo.h"

Retangulo::Retangulo()
    :FiguraGeometrica(2){

}

float Retangulo::calcularArea(){
    return this->base*this->altura;
}
void Retangulo::lerAtributosArea(){
    std::cin >> base;
    std::cin >> altura;
}
std::string Retangulo::getNome(){
    return "Retângulo";
}

