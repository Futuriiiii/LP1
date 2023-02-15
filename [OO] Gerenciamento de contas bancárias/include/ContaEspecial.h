#pragma once
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(double sal, string nome, int num);

        double definirLimite();
        double getSalario();

        void setSalario(double sal);
        void setNomeCliente(string nome);
        void setNumero(int num);
};
