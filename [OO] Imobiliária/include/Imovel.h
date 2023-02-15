#pragma once
#include <iostream>

class Imovel
{
    public:
        Imovel();
        Imovel(int t);
        void exibeAtributos();
        void lerAtributos();

    protected:
        int tipo;
        int valor;
        std::string dispo;

    private:
};

