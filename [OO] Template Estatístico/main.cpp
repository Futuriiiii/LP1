#include <iostream>
#include "Estatisticas.h"
#include "Pedido.h"
#include "Livro.h"

using namespace std;

int main(){
    Estatisticas<Pedido> estaPed;
    Estatisticas<Livro> estaLiv;
    vector<Pedido> vecP;
    vector<Livro> vecL;
    int N, quant, index;
    float valor;
    string tit;

    cin >> N; // numero de pedidos
    for(int i = 0; i < N; i++){
        cin >> valor;
        cin >> quant;
        vecP.push_back(Pedido(valor, quant));
    }
    cin >> N; // numero de livros
    for(int i = 0; i < N; i++){
        cin.ignore();
        getline(cin, tit);
        cin >> quant;
        vecL.push_back(Livro(tit, quant));
    }
    //pedidos
    index = estaPed.indexOfMaior(vecP);
    cout << "Maior: ";
    vecP[index].toString();
    index = estaPed.indexOfMenor(vecP);
    cout << "Menor: ";
    vecP[index].toString();
    cout << "Média: " << estaPed.media(vecP) << endl;

    //livros
    index = estaLiv.indexOfMaior(vecL);
    cout << "Maior: " << vecL[index].toString() << endl;
    index = estaLiv.indexOfMenor(vecL);
    cout << "Menor: " << vecL[index].toString() << endl;
    cout << "Média: " << estaLiv.media(vecL) << endl;

    return 0;
}
