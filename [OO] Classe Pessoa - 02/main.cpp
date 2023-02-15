#include <iostream>
#include <string>
#include "Pessoa2.h"

using namespace std;

int main(){
    int vezes, i, nEnc = 0;
    string n, t, pesq;

    cin >> vezes;
    getchar();

    Pessoa2 ps[vezes];

    for(int j = 0; j < vezes; j++){
        getline(cin, n);
        cin >> i;
        getchar();
        getline(cin, t);
        ps[j] = Pessoa2(n, i, t);
    }

    getline(cin, pesq);

    for(int j = 0; j < vezes; j++){
        if(ps[j].getNome().find(pesq) != string::npos){
            cout << ps[j].getNome() << ", " << ps[j].getIdade() << ", " << ps[j].getTelefone() << endl;
        }else{
            nEnc++;
        }

    }
    if(nEnc == vezes){
        cout << "Pessoa não encontrada" << endl;
    }

    return 0;
}
