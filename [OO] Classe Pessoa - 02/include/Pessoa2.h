#pragma once
#include <iostream>

using namespace std;

class Pessoa2{

    public:
        Pessoa2();
        Pessoa2(string nome);
        Pessoa2(string nome, int idade, string telefone);
        //set e get do nome
        void setNome(string n);
        string getNome();
        //set e get da idade
        void setIdade(int i);
        int getIdade();
        //set e get do telefone
        void setTelefone(string t);
        string getTelefone();

    private:
        string nome;
        int idade;
        string telefone;
};

