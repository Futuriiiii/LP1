#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <stdexcept>

#pragma once

class Funcionario
{
public:
    Funcionario();
    Funcionario(std::string nome, int matricula);
    void setNome(std::string nome);
    void setMatricula(int matricula);
    std::string getNome();
    int getMatricula();
    virtual double calculaSalario() = 0;
    ~Funcionario();

private:
    std::string nome;
    int matricula;

};
