#include "Terreno.h"

Terreno::Terreno() :Imovel(3){
    std::string nome = "Terreno";
}

void Terreno::lerAtributos(){
    Imovel::lerAtributos();
    std::cin >> area;
}

void Terreno::exibeAtributos(){
    Imovel::exibeAtributos();
    std::cout << area << "m2 de área de terreno. R$ " << valor << "." << std::endl;
}
