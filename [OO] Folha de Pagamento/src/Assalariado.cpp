#include "Assalariado.h"

Assalariado::Assalariado(){}

Assalariado::Assalariado(std::string nome, int matricula, double salario)
    :Funcionario(nome, matricula)
{
    this->salario = salario;
}

double Assalariado::calculaSalario()
{
    return salario;
}

Assalariado::~Assalariado(){}
