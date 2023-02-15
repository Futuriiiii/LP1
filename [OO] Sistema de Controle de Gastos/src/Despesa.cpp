#include "Despesa.h"

Despesa::Despesa(){
    valor = 0;
}

//get e set do nome
std::string Despesa::getNome(){
    return nome;
}
void Despesa::setNome(std::string n){
    nome = n;
}
//get e set do valor
float Despesa::getValor(){
    return valor;
}
void Despesa::setValor(float v){
    valor = v;
}
//get e set do tipo de gasto
std::string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}
void Despesa::setTipoDeGasto(std::string g){
    tipoDeGasto = g;
}
