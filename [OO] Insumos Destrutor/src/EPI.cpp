#include "EPI.h"

EPI::EPI(){}

EPI::~EPI()
{
    cout << "Deletando EPI" << endl;
}

EPI::EPI(string nome, int quant, float val, string dt, string fab, string desc){
    this->tipoInsumo = 3;

    this->nome = nome;
    this->quantidade = quant;
    this->valorUnitario = val;
    this->dtVencimento = dt;
    this->nomeFabricante = fab;

    this->descricao = desc;
}
