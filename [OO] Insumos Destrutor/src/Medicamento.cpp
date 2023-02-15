#include "Medicamento.h"

Medicamento::Medicamento(){}

Medicamento::~Medicamento()
{
    cout << "Deletando Medicamento" << endl;
}

Medicamento::Medicamento(string nome, int quant, float val, string dt, string fab, string dos, string adm, string disp){
    this->tipoInsumo = 2;

    this->nome = nome;
    this->quantidade = quant;
    this->valorUnitario = val;
    this->dtVencimento = dt;
    this->nomeFabricante = fab;

    this->dosagem = dos;
    this->administracao = adm;
    this->disponibilizacao = disp;
}
