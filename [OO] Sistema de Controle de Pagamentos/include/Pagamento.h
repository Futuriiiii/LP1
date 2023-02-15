#pragma once
#include <iostream>

using namespace std;

class Pagamento
{
    public:
        Pagamento();
        void setValorPagamento(float v);
        void setNomeDoFuncionario(string n);
        float getValorPagamento();
        string getNomeDoFuncioanario();

    private:
        float valorPagamento;
        string nomeDoFuncionario;
};

