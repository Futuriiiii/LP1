#include "Imovel.h"

Imovel::Imovel(){}

Imovel::~Imovel()
{
    cout << "Deletando Imovel" << endl;
}

void Imovel::exibeAtributos(){}
void Imovel::lerAtributos(){}

string Imovel::getNome(){
    return nome;
}
string Imovel::getDisp(){
    return disp;
}
