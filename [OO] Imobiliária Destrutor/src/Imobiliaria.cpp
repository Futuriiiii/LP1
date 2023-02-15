#include "Imobiliaria.h"

Imobiliaria::Imobiliaria(){}

Imobiliaria::~Imobiliaria()
{
    cout << "Deletando Imobiliária" << endl;
    for(int i = 0; i < imoveis.size(); i++){
        delete imoveis.at(i);
    }
}
void Imobiliaria::addImovel(Imovel *im){
    imoveis.push_back(im);
}

void Imobiliaria::buscar(string buscar){
    for(int i = 0; i < imoveis.size(); i++){
        if(imoveis.at(i)->getNome() == buscar || imoveis.at(i)->getDisp() == buscar){
            imoveis.at(i)->exibeAtributos();
        }
    }
}
