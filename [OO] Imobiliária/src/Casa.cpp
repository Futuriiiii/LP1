#include "Casa.h"

Casa::Casa() : Imovel(1){
    std::string nome = "Casa";
}

void Casa::lerAtributos(){
    Imovel::lerAtributos();
    std::cin >> pavi;
    std::cin >> quartos;
    std::cin >> areaT;
    std::cin >> areaC;
}

void Casa::exibeAtributos(){
    Imovel::exibeAtributos();
    std::cout << pavi << " pavimentos, " << quartos << " quartos, " << areaT << "m2 de �rea de terreno e " << areaC << "m2 de �rea constru�da. R$ " << valor << "." << std::endl;
}
