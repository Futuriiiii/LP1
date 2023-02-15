#pragma once
#include <iostream>

class Despesa{
    public:
        Despesa();
        std::string getNome();
        void setNome(std::string n);
        float getValor();
        void setValor(float v);
        std::string getTipoDeGasto();
        void setTipoDeGasto(std::string g);

    private:
        std::string nome;
        float valor;
        std::string tipoDeGasto;
};
