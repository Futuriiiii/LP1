#pragma once

#include <string>

class FuncionarioNaoExisteException
{
public:
    FuncionarioNaoExisteException();
    std::string FuncionarioNaoExite(std::string nome);
    ~FuncionarioNaoExisteException();

private:

};
