#include "Pedido.h"

Pedido::Pedido(){

}

Pedido::Pedido(float valor, int quant){
    valorUnitario = valor;
    quantidade = quant;
}
float Pedido::getTotal(){
    return valorUnitario * quantidade;
}
void Pedido::toString(){
    string str;

    cout << "R$ " << valorUnitario << ", quant: " << quantidade << ", total: R$ " << getTotal() << endl;
    //str = "R$ " + to_string(valorUnitario) + ", quant: " + to_string(quantidade) + ", total: R$ " + to_string(getTotal());
    //return str;
}
