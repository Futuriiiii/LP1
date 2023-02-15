#pragma once
#include "IConta.h"

class Conta : public IConta
{
    public:
        Conta(string nome, string num, double salmen);
        string getNomeCliente();
        string getNumeroConta();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();
        void setNomeCliente(string n);
        void setNumeroConta(string n);
        void setSalarioMensal(double s);
        void setSaldo(double s);
        void setLimite(double l);
        virtual void definirLimite();

        void sacar(double valor);
        void depositar(double valor);
        double saldoTotalDisponivel();

    protected:
        string nomeCliente;
        string numeroConta;
        double salarioMensal;
        double saldo;
        double limite;

};


