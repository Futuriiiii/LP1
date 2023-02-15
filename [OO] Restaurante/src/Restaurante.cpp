#include "Restaurante.h"

Restaurante::Restaurante(){}

void Restaurante::addMesa(Pedido p, int i){
    this->mesa[i].addPedido(p);
}
float Restaurante::calculaTotalRestaurante(){
    float total = 0;
    for(int i = 0; i < 100; i++){
        total += mesa[i].calculaTotal();
    }
    return total;
}
MesaDeRestaurante Restaurante::getMesa(int i){
    return this->mesa[i];
}
