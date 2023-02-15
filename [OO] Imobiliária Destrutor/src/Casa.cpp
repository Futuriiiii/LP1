#include "Casa.h"

Casa::Casa(){}

Casa::~Casa()
{
    cout << "Deletando Casa" << endl;
}

void Casa::exibeAtributos(){
    cout << nome << " para " << disp << ". " << pavi << " pavimentos, " << quart << " quartos, " << arTer << "m2 de área de terreno e " << arCon << "m2 de área construída. R$ " << valor << ".\n";
}
void Casa::lerAtributos(){
    string disp;
    float valor, arTer, arCon;
    int pavi, quart;

    cin >> valor;
    cin.ignore();
    getline(cin, disp);
    cin >> pavi;
    cin >> quart;
    cin >> arTer;
    cin >> arCon;

    this->nome = "Casa";
    this->disp = disp;
    this->valor = valor;
    this->tipo = 1;
    this->pavi = pavi;
    this->quart = quart;
    this->arTer = arTer;
    this->arCon = arCon;
}
