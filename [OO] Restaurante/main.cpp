#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "Restaurante.h"

int main(){
    Pedido *p = NULL;
    Restaurante *res = new Restaurante();

    string d;
    int n, q, inM;
    float pr;

    while(1){
        cin >> n;
        if(n < 0){
            break;
        }
        cin.ignore();
        getline(cin, d);
        cin >> q;
        cin >> pr;
        cin >> inM;

        p = new Pedido(n, d, q, pr);
        res->addMesa(*p, inM);
    }
    for(int i = 1; i < 100; i++){
        if(res->getMesa(i).calculaTotal() != 0){
            cout << "Mesa " << i << endl;
            res->getMesa(i).exibeConta();
            cout << endl;
        }
    }

    cout << "Total Restaurante: R$ " << res->calculaTotalRestaurante() << endl;

    return 0;
}
