#pragma once
#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();
        void exibeAtributos();
        void lerAtributos();

    protected:
        int tipo;
        std::string nome;
        std::string dispo;

    private:
        int pavi;
        int quartos;
        int areaT;
        int areaC;
};

