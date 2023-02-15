#include "Consultor.h"

Consultor::Consultor(float per){
    percentual = per;
    tipo = 2;

}

float Consultor::getSalario(){
    return salario * 1.1;
}
float Consultor::getSalario(float percentual){
    return salario * (1 + percentual);
}
int Consultor::getTipo(){
    return tipo;
}
float Consultor::getPercentual(){
    return percentual;
}
