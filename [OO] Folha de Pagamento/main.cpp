#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include <iomanip>

using namespace std;

int main(void)
{
    int orcamento;
    cin>>orcamento;
    getchar();

    SistemaGerenciaFolha sgf;
    sgf = SistemaGerenciaFolha(orcamento);
    string nome, nome2, nome3;
    int matricula;
    double salario, salarioPorHora, horasTrabalhas, vendasMensais, percentualComissao;

    getline(cin,nome);
    cin>>matricula;
    cin>>salario;
    auto vet1 = new Assalariado(nome, matricula, salario);
    sgf.setFuncionario(vet1);
    getchar();

    getline(cin,nome);
    cin>>matricula;
    cin>>salarioPorHora;
    cin>>horasTrabalhas;
    auto vet2 = new Horista(nome, matricula, salarioPorHora, horasTrabalhas);
    sgf.setFuncionario(vet2);
    getchar();

    getline(cin,nome);
    cin>>matricula;
    cin>>vendasMensais;
    cin>>percentualComissao;
    auto vet3 = new Comissionado(nome, matricula, vendasMensais, percentualComissao);
    sgf.setFuncionario(vet3);
    getchar();

    getline(cin,nome);
    getline(cin,nome2);
    getline(cin,nome3);

    try{
        cout<<sgf.consultaSalarioFuncionario(nome)<<endl;
        }
    catch(string e){
        cout<<e<<endl;
    }

    try{
        cout<<sgf.consultaSalarioFuncionario(nome2)<<endl;
        }
    catch(string e){
        cout<<e<<endl;
    }

    try{
        cout<<sgf.consultaSalarioFuncionario(nome3)<<endl;
        }
    catch(string e){
        cout<<e<<endl;
    }

    try{
        cout << sgf.calculaValorTotalFolha() << endl;
    }
    catch(double e){
        cout<<e<<endl;
    }

    return 0;

}
