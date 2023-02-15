#include "Pessoa2.h"

Pessoa2::Pessoa2(){

}

Pessoa2::Pessoa2(std::string n){

}
Pessoa2::Pessoa2(std::string n, int i, std::string t){
    setNome(n);
    setIdade(i);
    setTelefone(t);
}

//set e get do nome
void Pessoa2::setNome(std::string n){
    nome = n;
}
std::string Pessoa2::getNome(){
    return nome;
}
//set e get da idade
void Pessoa2::setIdade(int i){
    idade = i;
}
int Pessoa2::getIdade(){
    return idade;
}
//set e get do telefone
void Pessoa2::setTelefone(std::string t){
    telefone = t;
}
std::string Pessoa2::getTelefone(){
    return telefone;
}
