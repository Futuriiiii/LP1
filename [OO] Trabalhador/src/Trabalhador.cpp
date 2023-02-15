#include "Trabalhador.h"

Trabalhador::Trabalhador()
{
    salario = 0;
}

void Trabalhador::setNome(string n){
    nome = n;
}
void Trabalhador::setSalario(float s){
    salario = s;
}
string Trabalhador::getNome(){
    return nome;
}
float Trabalhador::getSalario(){
    return salario;
}
//
float Trabalhador::calcularPagamentoSemanal(){
    return 0;
}
float Trabalhador::calcularPagamentoSemanal(int horasSemanais){
    return 0;
}
//
