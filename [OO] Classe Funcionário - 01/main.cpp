#include <iostream>
#include "Funcionario.h"

using namespace std;

int main(){
    int quant;

    cin >> quant;
    getchar();

    Funcionario fnc[quant];

    for(int i = 0; i < quant; i++){
        getline(cin, fnc[i].primeiroNome);
        getline(cin, fnc[i].sobrenome);
        cin >> fnc[i].salario;
        getchar();
    }
    for(int i = 0; i < quant; i++){
        cout << fnc[i].primeiroNome << " " << fnc[i].sobrenome << " - " << fnc[i].salario << " - " << fnc[i].getSalarioAnual() << endl;
    }

    return 0;
}
