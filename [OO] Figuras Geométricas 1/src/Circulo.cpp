#include "Circulo.h"
#define PI 3.14

Circulo::Circulo()
    :FiguraGeometrica(4){

}

float Circulo::calcularArea(){
    return (this->raio*this->raio)*PI;
}
void Circulo::lerAtributosArea(){
    std::cin >> raio;
}
std::string Circulo::getNome(){
    return "Círculo";
}
