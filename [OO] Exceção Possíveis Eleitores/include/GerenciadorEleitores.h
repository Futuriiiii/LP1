#pragma once
#include <vector>
#include <stdexcept>
#include "Eleitor.h"

class GerenciadorEleitores
{
    public:
        GerenciadorEleitores();
        virtual ~GerenciadorEleitores();

        void cadastrarEleitor(std::string nome, int idade, std::string titulo);
        void verificaEleitor();

    private:
        std::vector<Eleitor> eleitores;

        void verificaMenoridade();
        void verificaPendenciaIdade();

};

