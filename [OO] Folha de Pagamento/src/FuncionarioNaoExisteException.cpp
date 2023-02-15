#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){}

std::string FuncionarioNaoExisteException::FuncionarioNaoExite(std::string nome)
{
    std::string resposta;
    resposta = "FuncionarioNaoExisteException " + nome;
    return resposta;
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException(){}
