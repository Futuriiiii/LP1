#include <iostream>
#include "Funcionario2.h"

using namespace std;

int main(){
    int quant;
    string priNom, sob;
    float sal;

    cin >> quant;
    getchar();

    Funcionario2 fnc[quant];

    for(int i = 0; i < quant; i++){
        getline(cin, priNom);
        getline(cin, sob);
        cin >> sal;
        getchar();
        fnc[i] = Funcionario2(priNom, sob, sal);
    }

    //for(int i = 0; i < quant; i++){
    //    cout << fnc[i].getPrimeiroNome() << " " << fnc[i].getSobrenome() << " - " << fnc[i].getSalario() << " - " << fnc[i].getSalarioAnual() << endl;
    //}


    for(int i = 0; i < quant; i++){
        cout << fnc[i].getPrimeiroNome() << " " << fnc[i].getSobrenome() << " - " << fnc[i].getSalario() << " - " << fnc[i].getSalarioAnual() << endl;
        fnc[i].aumentaSalario(0.1);
        cout << fnc[i].getSalarioAnual() << endl;
    }


    return 0;
}
