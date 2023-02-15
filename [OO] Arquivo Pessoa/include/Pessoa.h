#pragma once
#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        virtual ~Pessoa();
        void addPessoa1(string nome, string telefone);
        void addPessoa2(string nome, string telefone, string cpf);
        void exibePessoa();


    private:
        int tipo;
        string nome, telefone, cpf;
};
