#include "Apartamento.h"

Apartamento::Apartamento(){}

Apartamento::~Apartamento()
{
    cout << "Deletando Apartamento" << endl;
}

void Apartamento::exibeAtributos(){
    cout << nome << " para " << disp << ". " << area << "m2 de área, " << quart << " quartos, " << andar << " andar(es), " << cond << " de condomínio, " << vagas << " vaga(s) de garagem. R$ " << valor << ".\n";
}
void Apartamento::lerAtributos(){
    string disp;
    float valor, area, cond;
    int quart, andar, vagas;

    cin >> valor;
    cin.ignore();
    getline(cin, disp);
    cin >> area;
    cin >> quart;
    cin >> andar;
    cin >> cond;
    cin >> vagas;

    this->nome = "Apartamento";
    this->disp = disp;
    this->valor = valor;
    this->tipo = 2;
    this->area = area;
    this->quart = quart;
    this->andar = andar;
    this->cond = cond;
    this->vagas = vagas;
}
