#pragma once
#include "Insumo.h"

class EPI : public Insumo
{
    public:
        EPI();
        EPI(string nome, int quant, float val, string dt, string fab, string desc);
        virtual ~EPI();

    protected:
        int tipo;
        string descricao;

    private:
};
