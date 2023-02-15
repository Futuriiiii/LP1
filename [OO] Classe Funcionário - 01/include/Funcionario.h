#pragma once
#include <iostream>

class Funcionario{

    public:
        Funcionario();
        std::string primeiroNome;
        std::string sobrenome;
        float salario;
        float getSalarioAnual();

};

