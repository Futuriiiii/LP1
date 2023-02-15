#include "Consultor.h"

Consultor::Consultor(){}

float Consultor::getSalario(){
    return salario * 1.1;
}
float Consultor::getSalario(float percentual){
    return salario * (1 + percentual);
}
