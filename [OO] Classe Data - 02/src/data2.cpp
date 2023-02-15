#include "data2.h"
#include <iostream>

void Data2::setDia(int d){
    dia = d;
}
int Data2::getDia(){
    return dia;
}
//set e get do mes
void Data2::setMes(int m){
    mes = m;
}
int Data2::getMes(){
    return mes;
}
//set e get do ano
void Data2::setAno(int ano){
    this->ano = ano;
}
int Data2::getAno(){
    return ano;
}
void Data2::printData(){
    if(mes < 1 || mes > 12){
        std::cout << dia << " de Indefinido de " << ano << std::endl;
    }else{
    std::cout << dia << " de " << mesesStr[mes-1] << " de " << ano << std::endl;
    }
}

Data2::Data2(){

    dia = 1;
    mes = 1;
    ano = 1;

}

