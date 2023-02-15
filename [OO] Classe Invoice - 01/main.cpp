#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){

    Invoice c[2];

    for(int i = 0; i < 2; i++){
        cin >> c[i].numero;
        getchar();
        getline(cin, c[i].desc);
        cin >> c[i].quant;
        cin >> c[i].preco;
        getchar();
        if(c[i].quant < 0){
            c[i].quant = 0;
        }
        if(c[i].preco < 0){
            c[i].preco = 0;
        }
    }

    for(int i = 0; i < 2; i++){
        cout << c[i].numero << " - " << c[i].desc << " - " << c[i].quant << " - " << c[i].preco << " - " << c[i].getInvoiceAmount() << endl;
    }

    return 0;
}
