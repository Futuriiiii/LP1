#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(){}

TrabalhadorAssalariado::TrabalhadorAssalariado(float s){
    setSalario(s);
}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}
