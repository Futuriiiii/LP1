#include <iostream>
#include "Invoice2.h"

using namespace std;

int main(){
    int numero, quant;
    string desc;
    float preco;
    Invoice2 in1, in2;

    cin >> numero;
    getchar();
    getline(cin, desc);
    cin >> quant;
    cin >> preco;
    in1 = Invoice2(numero, desc, quant, preco);

    cin >> numero;
    getchar();
    getline(cin, desc);
    cin >> quant;
    cin >> preco;
    in2 = Invoice2(numero, desc, quant, preco);

    in1.print();
    in2.print();

    return 0;
}
