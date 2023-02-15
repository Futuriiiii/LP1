#pragma once

#include "Funcionario.h"

class Comissionado: public Funcionario
{
public:
    Comissionado();
    Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao);
    double calculaSalario();
    ~Comissionado();

private:
    double vendasMensais;
    double percentualComissao;
};
