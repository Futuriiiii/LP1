#include "Pagamento.h"

Pagamento::Pagamento(){
   valorPagamento = 0;
}

void Pagamento::setValorPagamento(float v){
    valorPagamento = v;
}
float Pagamento::getValorPagamento(){
    return valorPagamento;
}

void Pagamento::setNomeDoFuncionario(string n){
    nomeDoFuncionario = n;
}
string Pagamento::getNomeDoFuncioanario(){
    return nomeDoFuncionario;
}
