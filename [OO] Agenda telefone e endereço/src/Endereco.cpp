#include "Endereco.h"

Endereco::Endereco(){}

Endereco::Endereco(string r, string n, string b, string c, string e, string cep){
    setRua(r);
    setNum(n);
    setBairro(b);
    setCidade(c);
    setEstado(e);
    setCEP(cep);
}

string Endereco::getRua(){
    return rua;
}
string Endereco::getNum(){
    return num;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getEstado(){
    return estado;
}
string Endereco::getCEP(){
    return CEP;
}

void Endereco::setRua(string r){
    rua = r;
}
void Endereco::setNum(string n){
    num = n;
}
void Endereco::setBairro(string b){
    bairro = b;
}
void Endereco::setCidade(string c){
    cidade = c;
}
void Endereco::setEstado(string e){
    estado = e;
}
void Endereco::setCEP(string cep){
    CEP = cep;
}

string Endereco::toString(){
    string str;

    str = rua + ", " + num + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + CEP;

    return str;
}
