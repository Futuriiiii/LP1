#pragma once
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(float valHor);
        float calcularPagamentoSemanal(int horasSemanais);

    private:
        float valorDaHora;
};
