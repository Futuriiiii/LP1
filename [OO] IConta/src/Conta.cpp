#include "Conta.h"

Conta::Conta(string nome, string num, double salmen){
    nomeCliente = nome;
    numeroConta = num;
    salarioMensal = salmen;
    saldo = 0;
    definirLimite();
}

void Conta::sacar(double valor){
    if(valor <= saldoTotalDisponivel()){
        saldo = saldo - valor;
    }

}
void Conta::depositar(double valor){
    saldo = saldo + valor;
}
double Conta::saldoTotalDisponivel(){
    return saldo + limite;
}

void Conta::definirLimite(){
    limite = salarioMensal * 2;
}

string Conta::getNomeCliente(){
    return nomeCliente;
}
string Conta::getNumeroConta(){
    return numeroConta;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}
void Conta::setNomeCliente(string n){
    nomeCliente = n;
}
void Conta::setNumeroConta(string n){
    numeroConta = n;
}
void Conta::setSalarioMensal(double s){
    salarioMensal = s;
}
void Conta::setSaldo(double s){
    saldo = s;
}
void Conta::setLimite(double l){
    limite = l;
}
