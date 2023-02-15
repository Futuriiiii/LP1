#pragma once
#include "Insumo.h"


class Vacina : public Insumo
{
    public:
        Vacina();
        Vacina(std::string nome, int quant, float val, std::string dt, std::string fab, std::string tipo, int dose, int dia);
        virtual ~Vacina();

    protected:
        int tipo, quantDoses, intervalo;

    private:
};

