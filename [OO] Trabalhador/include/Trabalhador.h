#pragma once
#include <iostream>

using namespace std;

class Trabalhador
{
    public:
        Trabalhador();
        void setNome(string n);
        void setSalario(float s);
        string getNome();
        float getSalario();
        //
        virtual float calcularPagamentoSemanal();
        virtual float calcularPagamentoSemanal(int horasSemanais);
        //
    protected:
        string nome;
        float salario;
};
