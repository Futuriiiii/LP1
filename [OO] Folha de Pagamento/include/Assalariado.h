#pragma once

#include "Funcionario.h"

class Assalariado: public Funcionario
{
public:
    Assalariado();
    Assalariado(std::string nome, int matricula, double salario);
    double calculaSalario();
    ~Assalariado();

private:
    double salario;
};
