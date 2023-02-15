#include "Data3.h"
#include <iostream>

Data3::Data3()
{
    dia = 1;
    mes = 1;
    ano = 1;
}

Data3::Data3(int d, int m, int a){
    if(m > 12 || m < 1){
        std::cout << "Atributo mês Inválido" << std::endl;
        m = 1;
    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d > 31 || d == 0){
            std::cout << "Atributo dia Inválido" << std::endl;
            d = 1;
        }
    }
    if(m == 2){
        if(d > 28 || d < 0){
            std::cout << "Atributo dia Inválido" << std::endl;
            d = 1;
        }
    }
    if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d > 30 || d < 0){
            std::cout << "Atributo dia Inválido" << std::endl;
            d = 1;
        }
    }
    setDia(d);
    setMes(m);
    setAno(a);
}

void Data3::setDia(int d){
    dia = d;
}
int Data3::getDia(){
    return dia;
}
//set e get do mes
void Data3::setMes(int m){
    mes = m;
}
int Data3::getMes(){
    return mes;
}
//set e get do ano
void Data3::setAno(int ano){
    this->ano = ano;
}
int Data3::getAno(){
    return ano;
}

//avanca o dia em 1
void Data3::avancarDia(){
    if(getMes() == 1 || getMes() == 3 || getMes() == 5 ||getMes() == 7 || getMes() == 8 || getMes() == 10 ||getMes() == 12){
        if(getDia() < 31){
            setDia(++dia);
        }else{
            if(getMes() == 12){
                setMes(0);
                setAno(++ano);
            }
            setMes(++mes);
            setDia(dia = 1);
        }
    }
    if(getMes() == 2){
        if(getDia() < 28){
            setDia(++dia);
        }else{
            setMes(++mes);
            setDia(1);
        }
    }
    if(getMes() == 4 || getMes() == 6 || getMes() == 9 || getMes() == 11){
        if(getDia() < 30){
            setDia(++dia);
        }else{
            setMes(++mes);
            setDia(1);
        }
    }
}
