#pragma once
#include <vector>
#include "Imovel.h"

class Imobiliaria
{
    public:
        Imobiliaria();
        virtual ~Imobiliaria();
        void addImovel(Imovel *im);
        void buscar(string buscar);

    private:
        vector<Imovel*> imoveis;
};

