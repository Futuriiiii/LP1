#include <iostream>
#include "Conta.h"
#include "Poupanca.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta *cnt;
    string nome;
    int nConta;
    double salario, deposito, saque;

    getline(cin, nome);
    cin >> nConta;
    cin >> salario;
    cin >> deposito;
    cin >> saque;
    cin.ignore();

    cnt = new ContaCorrente(salario, nome, nConta);
    cnt->depositar(deposito);
    cnt->sacar(saque);
    cout << cnt->getNomeCliente() << ", cc: " << cnt->getNumero() << ", salário " << cnt->getSalario() << ", saldo total disponível: R$ " << cnt->saldoTotalDisponivel() << endl;

    getline(cin, nome);
    cin >> nConta;
    cin >> salario;
    cin >> deposito;
    cin >> saque;
    cin.ignore();

    cnt = new ContaEspecial(salario, nome, nConta);
    cout << cnt->getNomeCliente() << ", cc: " << cnt->getNumero() << ", salário " << cnt->getSalario() << ",\n";
    cnt->depositar(deposito);
    cnt->sacar(saque);
    cout << "saldo total disponível: R$ " << cnt->saldoTotalDisponivel() << endl;

    getline(cin, nome);
    cin >> nConta;
    cin >> deposito;
    cin >> saque;

    cnt = new Poupanca(51, nome, nConta);
    cnt->depositar(deposito);
    cnt->sacar(saque);
    cnt->render();
    cout << cnt->getNomeCliente() << ", cc: " << cnt->getNumero() << ", saldo total disponível: R$ " << cnt->saldoTotalDisponivel() << endl;


    return 0;
}
