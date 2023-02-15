#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){}

TrabalhadorPorHora::TrabalhadorPorHora(float valHor){
    valorDaHora = valHor;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horSem){
    float pgS;

    if(horSem <= 40){
        pgS = horSem * valorDaHora;
        salario = pgS * 4;
        return pgS;
    }else{
        pgS = 40 * valorDaHora + ((horSem - 40) * valorDaHora * 1.5);
        salario = pgS * 4;
        return pgS;
    }
}
