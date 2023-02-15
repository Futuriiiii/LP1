#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main(){
    int n, index;
    float rs;
    string nome, busca;
    ControleDePagamentos ctrl;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> rs;
        getchar();
        getline(cin, nome);
        ctrl.setValorPagamento(rs);
        ctrl.setNomeDoFuncionario(nome);
        ctrl.setPagamento(ctrl, i);
    }
    getline(cin, busca);

    index = ctrl.getIndexFuncionario(busca);

    if(index == -1){
        cout << busca << " não encontrado(a)." << endl;
    }else{
        cout << ctrl.getPagamento(index).getNomeDoFuncioanario() << ": R$ " << ctrl.getPagamento(index).getValorPagamento()<< endl;
    }

    cout << "Total: R$ " << ctrl.calculaTotalDePagamentos() << endl;

    return 0;
}
