#include "Comissionado.h"

Comissionado::Comissionado(){}

Comissionado::Comissionado(std::string nome, int matricula, double vendasMensais, double percentualComissao)
    :Funcionario(nome, matricula)
{
    this->vendasMensais = vendasMensais;
    this->percentualComissao = percentualComissao;
}

double Comissionado::calculaSalario()
{
    return vendasMensais * percentualComissao;
}

Comissionado::~Comissionado(){}
