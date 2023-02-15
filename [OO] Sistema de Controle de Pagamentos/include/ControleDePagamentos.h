#pragma once
#include "Pagamento.h"
#define MAX 100

class ControleDePagamentos : public Pagamento
{
    public:
        ControleDePagamentos();
        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(string nomeFuncionario);

    private:
        Pagamento pagamentos[MAX];
};
