#pragma once
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        void exibeAtributos();
        void lerAtributos();

    protected:
        int tipo;
        std::string nome;
        std::string dispo;

    private:
        int area;
        int quartos;
        int andar;
        int cond;
        int vagas;
};

