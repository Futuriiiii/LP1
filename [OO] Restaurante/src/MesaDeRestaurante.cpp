#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){}

void MesaDeRestaurante::addPedido(Pedido p){
    bool existe = false;

    for(int i = 0; i < (int)ped.size(); i++){
        if(p.getNumero() == ped[i].getNumero()){
            existe = true;
            ped[i].setQuant(p.getQuant() + ped[i].getQuant());
        }
    }

    if(!existe){
        ped.push_back(p);
    }
}
void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < (int)ped.size(); i++){
        ped[i].setQuant(0);
    }
}
float MesaDeRestaurante::calculaTotal(){
    float total = 0;
    for(int i = 0; i < (int)ped.size(); i++){
        total += ped[i].getTotal();
    }
    return total;
}
void MesaDeRestaurante::exibeConta(){
    for(int i = 0; i < (int)ped.size(); i++){
        cout << ped[i].getNumero() << " - " << ped[i].getDesc() << " - " << ped[i].getQuant() << " - " << ped[i].getPreco() << " - R$ " << ped[i].getTotal() << endl;
    }
    cout << "Total: R$ " << calculaTotal() << endl;
}
