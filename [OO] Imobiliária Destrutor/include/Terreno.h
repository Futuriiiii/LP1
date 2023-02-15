#pragma once
#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();
        void exibeAtributos();
        void lerAtributos();

    private:
        float area;
};

