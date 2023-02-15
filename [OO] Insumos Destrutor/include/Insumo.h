#pragma once
#include <iostream>

using namespace std;

class Insumo
{
    public:
        Insumo();
        virtual ~Insumo();

    protected:
        string nome, dtVencimento, nomeFabricante;
        int quantidade, valorUnitario, tipoInsumo;
};
