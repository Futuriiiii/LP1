#pragma once
#include <iostream>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(string r, string n, string b, string c, string e, string cep);
        string getRua();
        string getNum();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCEP();
        void setRua(string r);
        void setNum(string n);
        void setBairro(string b);
        void setCidade(string c);
        void setEstado(string e);
        void setCEP(string cep);
        string toString();

    private:
        string rua, num, bairro, cidade, estado, CEP;
};


