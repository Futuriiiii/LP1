#include "Terreno.h"

Terreno::Terreno(){}

Terreno::~Terreno()
{
    cout << "Deletando Terreno" << endl;
}

void Terreno::exibeAtributos(){
    cout << nome << " para " << disp << ". " <<  area << "m2 de área de terreno. R$ " << valor << ".\n";
}
void Terreno::lerAtributos(){
    string disp;
    float valor, area;

    cin >> valor;
    cin.ignore();
    getline(cin, disp);
    cin >> area;

    this->nome = "Terreno";
    this->disp = disp;
    this->valor = valor;
    this->tipo = 3;
    this->area = area;
}
