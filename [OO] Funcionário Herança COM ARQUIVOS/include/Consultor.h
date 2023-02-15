#pragma once
#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor(float per);
        float getSalario();
        float getSalario(float percentual);
        int getTipo();
        float getPercentual();

    private:
        float percentual;
};

