#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(){}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento)
{
    this->orcamento = orcamento;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome)
{
    FuncionarioNaoExisteException func;
    for(unsigned int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getNome() == nome)
        {
            return funcionarios[i]->calculaSalario();
        }
    }
    throw func.FuncionarioNaoExite(nome);
    return 0;
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    OrcamentoEstouradoException orc;
    double totalFolha = 0;
    for(unsigned int i = 0; i < funcionarios.size(); i++){
        totalFolha += funcionarios[i]->calculaSalario();
    }
    if(orcamento > totalFolha){
        return totalFolha;
    }else
    {
        std::cout << orc.OrcamentoEstourado();
        throw getcalculaTotalFolha();
    }
    return 0;
}

double SistemaGerenciaFolha::getcalculaTotalFolha()
{
    double totalFolha = 0;
    for(unsigned int i = 0; i < funcionarios.size(); i++){
        totalFolha += funcionarios[i]->calculaSalario();
    }
    return totalFolha;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *funcionario)
{
    funcionarios.push_back(funcionario);
}

SistemaGerenciaFolha::~SistemaGerenciaFolha(){}
