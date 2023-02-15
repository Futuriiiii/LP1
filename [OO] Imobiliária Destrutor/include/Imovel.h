#pragma once
#include <iostream>

using namespace std;

class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();
        virtual void exibeAtributos();
        virtual void lerAtributos();
        string getNome();
        string getDisp();

    protected:
        string nome, disp;
        float valor;
        int tipo;
};
