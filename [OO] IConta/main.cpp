#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    string nome, num;
    double salario, dep, saq;
    Conta *cc;

    for(int i = 0; i < 2; i++){
        getline(cin, nome);
        getline(cin, num);
        cin >> salario;
        cin >> dep;
        cin >> saq;
        cin.ignore();

        if(i == 0){
            cc = new Conta(nome, num, salario);
        }else{
            cc = new ContaEspecial(nome, num, salario);
        }
        cc->depositar(dep);
        cc->sacar(saq);
        cout << cc->getNomeCliente() << ", cc: " << cc->getNumeroConta() << ", salário " << cc->getSalarioMensal() << ", saldo total disponível: R$ " << cc->saldoTotalDisponivel() << endl;
    }

    return 0;
}
