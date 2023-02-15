#pragma once
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string n);
        Pessoa(string n, Endereco e, string t);
        string getNome();
        string getTelefone();
        Endereco getEndereco();
        void setNome(string n);
        void setTelefone(string t);
        void setEndereco(Endereco e);
        string toString();

    private:
        string nome, telefone;
        Endereco endereco;
};

