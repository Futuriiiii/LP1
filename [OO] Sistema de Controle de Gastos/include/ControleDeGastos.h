#pragma once
#include <iostream>
#include "Despesa.h"

class ControleDeGastos{
    public:
        ControleDeGastos();
        void setDespesa(Despesa d, int pos);
        Despesa getDespesa(int pos);
        float calculaTotalDeDespesas();
        float calculaTotalDeDespesas(std::string tipo);
        bool existeDespesaDoTipo(std::string tipo);

    private:
        Despesa despesas[100];
};
