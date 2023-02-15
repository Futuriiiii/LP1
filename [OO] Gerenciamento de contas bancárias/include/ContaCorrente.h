#pragma once
#include "Conta.h"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double sal, string nome, int num);
        virtual double definirLimite();
        void setSalario(double sal);
        void setLimite(int lim);
        virtual double getSalario();
        int getLimite();
        double saldoTotalDisponivel();

        void setNomeCliente(string nome);
        void setNumero(int num);

    protected:
        double salario;
        int limite;
};

