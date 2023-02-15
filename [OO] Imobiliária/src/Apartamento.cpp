#include "Apartamento.h"

Apartamento::Apartamento() : Imovel(2){
    std::string nome = "Apartamento";
}

void Apartamento::lerAtributos(){
    Imovel::lerAtributos();
    std::cin >> area;
    std::cin >> quartos;
    std::cin >> andar;
    std::cin >> cond;
    std::cin >> vagas;
}

void Apartamento::exibeAtributos(){
    Imovel::exibeAtributos();
    std::cout << area << "m2 de �rea, " << quartos << " quartos, " << andar << "andar(es), " << cond << " de condom�nio, " << vagas << " vaga(s) de garagem. R$ " << valor << "." << std::endl;
}
