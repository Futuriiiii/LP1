#include "Vacina.h"

Vacina::Vacina(){}

Vacina::~Vacina()
{
     cout << "Deletando Vacina" << endl;
}

Vacina::Vacina(std::string nome, int quant, float val, std::string dt, std::string fab, std::string tipo, int dose, int dia){
    this->tipoInsumo = 1;

    this->nome = nome;
    this->quantidade = quant;
    this->valorUnitario = val;
    this->dtVencimento = dt;
    this->nomeFabricante = fab;

    this->quantDoses = dose;
    this->intervalo = dia;
}
