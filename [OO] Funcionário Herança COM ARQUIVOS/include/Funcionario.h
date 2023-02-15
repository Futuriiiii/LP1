#pragma once
#include <iostream>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        string getMatricula();
        string getNome();
        virtual float getSalario();
        void setMatricula(string m);
        void setNome(string n);
        void setSalario(float s);
        int getTipo();

    protected:
        string matricula, nome;
        float salario;
        int tipo;

};

