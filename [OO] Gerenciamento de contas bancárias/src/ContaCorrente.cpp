#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(){}

ContaCorrente::ContaCorrente(double sal, string nome, int num){
    setSalario(sal);
    setNomeCliente(nome);
    setNumero(num);
    definirLimite();
}

double ContaCorrente::definirLimite(){
    limite = 2*salario;
    return limite;
}

void ContaCorrente::setSalario(double s){
    salario = s;
}
double ContaCorrente::getSalario(){
    return salario;
}
int ContaCorrente::getLimite(){
    return limite;
}
double ContaCorrente::saldoTotalDisponivel(){
    return saldo+limite;
}

void ContaCorrente::setNomeCliente(string n){
    nomeCliente = n;
}
void ContaCorrente::setNumero(int num){
    numero = num;
}
