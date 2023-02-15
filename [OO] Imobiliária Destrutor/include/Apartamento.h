#pragma once
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();
        void exibeAtributos();
        void lerAtributos();

    private:
        float area, cond;
        int quart, andar, vagas;
};

