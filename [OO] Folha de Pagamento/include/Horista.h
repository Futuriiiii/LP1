#pragma once

#include "Funcionario.h"

class Horista: public Funcionario
{
public:
    Horista();
    Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
    double calculaSalario();
    ~Horista();

private:
    double salarioPorHora;
    double horasTrabalhadas;
};
