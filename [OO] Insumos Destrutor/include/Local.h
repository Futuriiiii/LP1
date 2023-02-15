#pragma once
#include "Insumo.h"
#include <vector>

class Local
{
    public:
        Local();
        virtual ~Local();
        void addInsumosArr(Insumo *in, int index);
        void addInsumosVec(Insumo *in);

    protected:
        string nome;
        int tipo;
        Insumo* insumosArr[3];
        vector<Insumo*> insumosVec;

    private:
};
