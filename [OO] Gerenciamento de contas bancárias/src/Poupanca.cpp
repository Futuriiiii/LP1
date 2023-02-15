#include "Poupanca.h"

Poupanca::Poupanca(){}

Poupanca::Poupanca(int var, string n, int num){
    setVariacao(var);
    setNomeCliente(n);
    setNumero(num);
}

void Poupanca::render(){
    if(variacao == 51){
        saldo = saldo*1.006;
    }else{
        saldo = saldo*1.011;
    }
}

void Poupanca::setVariacao(int v){
    variacao = v;
}
void Poupanca::setTaxaRendimento(double t){
    taxaRendimento = t;
}
int Poupanca::getVariacao(){
    return variacao;
}
double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}

void Poupanca::setNomeCliente(string n){
    nomeCliente = n;
}
void Poupanca::setNumero(int num){
    numero = num;
}
