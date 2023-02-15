#include "GerenciadorEleitores.h"

GerenciadorEleitores::GerenciadorEleitores(){}

GerenciadorEleitores::~GerenciadorEleitores(){}

void GerenciadorEleitores::cadastrarEleitor(std::string nome, int idade, std::string titulo){
    Eleitor el = Eleitor(nome, idade, titulo);
    eleitores.push_back(el);
}

void GerenciadorEleitores::verificaMenoridade(){
    if(eleitores.back().getIdade() < 16){
        std::string str = "Eleitor " + eleitores.back().getNome() + " não pode ser cadastrado";
        throw std::underflow_error(str);
    }
}

void GerenciadorEleitores::verificaPendenciaIdade(){
    if(eleitores.back().getIdade() > 20){
        std::string str = "Eleitor " + eleitores.back().getNome() + " com pendência";
        throw std::overflow_error(str);
    }
}

void GerenciadorEleitores::verificaEleitor(){
    try
    {
        verificaMenoridade();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        verificaPendenciaIdade();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

}
