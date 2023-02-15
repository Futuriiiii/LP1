#include "Invoice2.h"
#include <iostream>

using namespace std;

Invoice2::Invoice2(int n, string d, int q, float p){
    if(q < 0){
        q = 0;
    }
    if(p < 0){
        p = 0.0;
    }
    setNum(n);
    setDesc(d);
    setQuant(q);
    setPreco(p);
}

Invoice2::Invoice2(){

   numero = 1;
   desc = "vazio";
   quant = 1;
   preco = 1;

}

float Invoice2::getInvoiceAmount(){
    return preco * quant;
}

void Invoice2::print(){
    cout << getNum() << " - " << getDesc() << " - " << getQuant() << " - " << getPreco() << " - " << getInvoiceAmount() << endl;
}

//set e get do numero
void Invoice2::setNum(int n){
    numero = n;
}
int Invoice2::getNum(){
    return numero;
}
//set e get da desc
void Invoice2::setDesc(string d){
    desc = d;
}
string Invoice2::getDesc(){
    return desc;
}
//set e get da quant
void Invoice2::setQuant(int q){
    quant = q;
}
int Invoice2::getQuant(){
    return quant;
}
//set e get do preco
void Invoice2::setPreco(float p){
    preco = p;
}
float Invoice2::getPreco(){
    return preco;
}
