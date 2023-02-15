#pragma once
#include "Imovel.h"

class Terreno : public Imovel
{
    public:
        Terreno();
        void exibeAtributos();
        void lerAtributos();

    protected:
        int tipo;
        std::string nome;
        std::string dispo;

    private:
        int area;
};
