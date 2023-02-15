#include "Funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(std::string nome, int matricula)
{
    this->nome = nome;
    this->matricula = matricula;
}
void Funcionario::setNome(std::string nome)
{
    this->nome = nome;
}
void Funcionario::setMatricula(int matricula)
{
    this->matricula = matricula;
}
std::string Funcionario::getNome()
{
    return nome;
}
int Funcionario::getMatricula()
{
    return matricula;
}

double Funcionario::calculaSalario()
{
    return 0;
}

Funcionario::~Funcionario(){}
