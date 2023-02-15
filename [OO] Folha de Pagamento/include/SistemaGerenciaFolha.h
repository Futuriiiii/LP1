#pragma once

#include "Funcionario.h"

class SistemaGerenciaFolha
{
public:
    SistemaGerenciaFolha();
    SistemaGerenciaFolha(double orcamentoMaximo);
    double consultaSalarioFuncionario(std::string nome);
    double getcalculaTotalFolha();
    double calculaValorTotalFolha();
    void setFuncionario(Funcionario *funcionario);
    ~SistemaGerenciaFolha();

private:
    std::vector<Funcionario*> funcionarios;
    double orcamento;
};
