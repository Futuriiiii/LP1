#pragma once
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(float sal);
        float calcularPagamentoSemanal();
};
