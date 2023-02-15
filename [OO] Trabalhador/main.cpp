#include <iostream>
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){

    Trabalhador *tr;

    int quant, tipo;
    string nome;
    float salario, valorHora;
    int horasSem;

    cin >> quant;

    for(int i = 0; i < quant; i++){
        cin >> tipo;
        cin.ignore();

        switch(tipo){
            case 1:{
                getline(cin, nome);
                cin >> salario;
                tr = new TrabalhadorAssalariado(salario);
                //TrabalhadorAssalariado tr = TrabalhadorAssalariado(salario);
                tr->setNome(nome);
                cout << tr->getNome() << " - Semanal: R$ " << tr->calcularPagamentoSemanal() << " - Mensal: R$ " << tr->getSalario() << endl;
                break;
            }
            case 2:{
                getline(cin, nome);
                cin >> valorHora;
                cin >> horasSem;
                tr = new TrabalhadorPorHora(valorHora);
                //TrabalhadorPorHora tr = TrabalhadorPorHora(valorHora);
                tr->calcularPagamentoSemanal(horasSem);
                tr->setNome(nome);
                cout << tr->getNome() << " - Semanal: R$ " << tr->calcularPagamentoSemanal(horasSem) << " - Mensal: R$ " << tr->getSalario() << endl;
                break;
            }
        }
    }

    return 0;
}
