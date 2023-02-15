#pragma once
#include <iostream>

using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(float valor, int quant);
        float getTotal();
        void /*string*/ toString();

    private:
        float valorUnitario;
        int quantidade;
};

