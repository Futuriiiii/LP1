#pragma once
#include <iostream>

using namespace std;

class Conta
{
    public:
        Conta();
        void sacar(double valor);
        void depositar(double valor);
        void setSaldo(double saldo);
        string getNomeCliente();
        int getNumero();
        double getSaldo();
        virtual double saldoTotalDisponivel();
        virtual double getSalario();
        virtual void render();

    protected:
        string nomeCliente;
        int numero;
        double saldo;
};
