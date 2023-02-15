#pragma once
#include <iostream>

class Eleitor
{
    public:
        Eleitor();
        Eleitor(std::string nome, int idade, std::string titulo);
        virtual ~Eleitor();
        int getIdade();
        std::string getNome();

    protected:

    private:
        std::string nome, titulo;
        int idade;
};
