#pragma once
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(string nome, string num, double salmen);
        void definirLimite();
};


