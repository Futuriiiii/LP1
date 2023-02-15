#include "Quadrado.h"

Quadrado::Quadrado()
    :FiguraGeometrica(1){

}

float Quadrado::calcularArea(){
    return this->lado*this->lado;
}
void Quadrado::lerAtributosArea(){
    std::cin >> lado;
}
std::string Quadrado::getNome(){
    return "Quadrado";
}
