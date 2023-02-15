#pragma once
#include "Imovel.h"

class Casa : public Imovel
{
    public:
        Casa();
        virtual ~Casa();
        void exibeAtributos();
        void lerAtributos();

    private:
        int pavi, quart;
        float arTer, arCon;
};

