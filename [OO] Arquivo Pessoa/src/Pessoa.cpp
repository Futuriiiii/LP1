#include "Pessoa.h"

Pessoa::Pessoa(){}

Pessoa::~Pessoa(){}

void Pessoa::addPessoa1(string nome, string telefone){
    this->tipo = 1;
    this->nome = nome;
    this->telefone = telefone;
}
void Pessoa::addPessoa2(string nome, string telefone, string cpf){
    this->tipo = 2;
    this->nome = nome;
    this->telefone = telefone;
    this->cpf = cpf;
}
void Pessoa::exibePessoa(){
    if(tipo == 1){
        cout << nome << ", tel: " << telefone << endl;
    }else{
        cout << nome << ", tel: " << telefone << ", CPF: " << cpf << endl;
    }
}
