#pragma once
#include "Pedido.h"
#include <vector>

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void addPedido(Pedido p);
        void zeraPedidos();
        float calculaTotal();
        void exibeConta();

    protected:

    private:
        vector<Pedido> ped;
};
