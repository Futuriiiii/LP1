#pragma once
#include "MesaDeRestaurante.h"

class Restaurante
{
    public:
        Restaurante();
        void addMesa(Pedido p, int indMesa);
        float calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int indMesa);

    private:
        MesaDeRestaurante mesa[100];
};
