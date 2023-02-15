#include "Pessoa.h"

Pessoa::Pessoa(){}

string Pessoa::getNome(){
    return nome;
}
string Pessoa::getTelefone(){
    return telefone;
}
Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setNome(string n){
    nome = n;
}
void Pessoa::setTelefone(string t){
    telefone = t;
}
void Pessoa::setEndereco(Endereco e){
    endereco = e;
}

string Pessoa::toString(){
    string str;

    str = nome + ", " + telefone + "\n" + endereco.toString();

    return str;
}
