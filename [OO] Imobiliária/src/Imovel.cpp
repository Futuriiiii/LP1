#include "Imovel.h"

Imovel::Imovel(){}

Imovel::Imovel(int t){
    tipo = t;
}

void Imovel::lerAtributos(){
    std::cin >> valor;
    std::cin >> dispo;
}

void Imovel::exibeAtributos(){
    switch(tipo){
    case 1:
        std::cout << "Casa para " << dispo << ". ";
        break;
    case 2:
        std::cout << "Apartamento para " << dispo << ". ";
        break;
    case 3:
        std::cout << "Terreno para " << dispo << ". ";
        break;
    }
}
