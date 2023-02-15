#pragma once
#include <iostream>

using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(int n, string d, int q, float p);
        float getTotal();
        void setNumero(int n);
        void setDesc(string d);
        void setQuant(int q);
        void setPreco(float p);
        int getNumero();
        string getDesc();
        int getQuant();
        float getPreco();

    private:
        string desc;
        int numero, quant;
        float preco;
};
