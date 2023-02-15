#pragma once
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(int var, string nome, int num);
        void render();
        void setVariacao(int var);
        void setTaxaRendimento(double taxa);
        int getVariacao();
        double getTaxaRendimento();

        void setNomeCliente(string nome);
        void setNumero(int num);

    private:
        int variacao;
        double taxaRendimento;
};
