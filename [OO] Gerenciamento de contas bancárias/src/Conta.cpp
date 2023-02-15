#include "Conta.h"

Conta::Conta(){}


void Conta::sacar(double v){
    if(v > saldo){
        cout << "saldo insuficiente" << endl;
        return;
    }
    saldo = saldo - v;
}
void Conta::depositar(double v){
    saldo = saldo + v;
}

void Conta::setSaldo(double s){
    saldo = s;
}
string Conta::getNomeCliente(){
    return nomeCliente;
}
int Conta::getNumero(){
    return numero;
}
double Conta::getSaldo(){
    return saldo;
}

double Conta::saldoTotalDisponivel(){
    return saldo;
}
double Conta::getSalario(){
    return 0;
}
void Conta::render(){

}
