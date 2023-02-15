#pragma once
#include <iostream>

class Funcionario2{

    public:
        Funcionario2();
        Funcionario2(std::string pn, std::string sn, float s);
        std::string getPrimeiroNome();
        void setPrimeiroNome(std::string pn);
        std::string getSobrenome();
        void setSobrenome(std::string sn);
        float getSalario();
        void setSalario(float s);
        float getSalarioAnual();
        void aumentaSalario(float porcento);

    private:
        std::string primeiroNome;
        std::string sobrenome;
        float salario;
};
