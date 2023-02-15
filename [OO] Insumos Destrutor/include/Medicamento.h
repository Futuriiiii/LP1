#pragma once
#include "Insumo.h"

class Medicamento : public Insumo
{
    public:
        Medicamento();
        Medicamento(string nome, int quant, float val, string dt, string fab, string dos, string adm, string disp);
        virtual ~Medicamento();

    protected:
        string dosagem, administracao, disponibilizacao;

    private:
};

