#include "Funcionario.h"

Funcionario::Funcionario(){
    tipo = 1;
}

string Funcionario::getMatricula(){
    return matricula;
}
string Funcionario::getNome(){
    return nome;
}
float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setMatricula(string m){
    matricula = m;
}
void Funcionario::setNome(string n){
    nome = n;
}
void Funcionario::setSalario(float s){
    salario = s;
}

int Funcionario::getTipo(){
    return tipo;
}
