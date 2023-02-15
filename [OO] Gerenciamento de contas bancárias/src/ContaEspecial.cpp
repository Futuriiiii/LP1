#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(double sal, string nome, int num)
{
    setSalario(sal);
    setNomeCliente(nome);
    setNumero(num);
    definirLimite();
}

double ContaEspecial::definirLimite(){
    limite = 4*salario;
    return limite;
}

double ContaEspecial::getSalario(){
    return salario;
}

void ContaEspecial::setSalario(double s){
    salario = s;
}
void ContaEspecial::setNomeCliente(string n){
    nomeCliente = n;
}
void ContaEspecial::setNumero(int num){
    numero = num;
}
