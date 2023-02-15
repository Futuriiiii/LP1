#include "Pedido.h"

Pedido::Pedido(){}
Pedido::Pedido(int n, string d, int q, float p){
    setDesc(d);
    setQuant(q);
    setPreco(p);
    setNumero(n);
}

float Pedido::getTotal(){
    return quant * preco;
}

void Pedido::setNumero(int n){
    numero = n;
}
void Pedido::setDesc(string d){
    desc = d;
}
void Pedido::setQuant(int q){
    quant = q;
}
void Pedido::setPreco(float p){
    preco = p;
}
int Pedido::getNumero(){
    return numero;
}
string Pedido::getDesc(){
    return desc;
}
int Pedido::getQuant(){
    return quant;
}
float Pedido::getPreco(){
    return preco;
}
