#include "Eleitor.h"

Eleitor::Eleitor(){}

Eleitor::Eleitor(std::string nome, int idade, std::string titulo){
    this->nome = nome;
    this->idade = idade;
    this->titulo = titulo;
}

Eleitor::~Eleitor(){}

int Eleitor::getIdade(){
    return idade;
}
std::string Eleitor::getNome(){
    return nome;
}
