#include <iostream>
#include "Consultor.h"

using namespace std;

int main(){
    Funcionario fn;
    Consultor cn;
    string mat, nome;
    float sal;

    for(int i = 0; i < 2; i++){
        getline(cin, mat);
        getline(cin, nome);
        cin >> sal;
        cin.ignore();
        if(i == 0){
            fn.setMatricula(mat);
            fn.setNome(nome);
            fn.setSalario(sal);
            cout << fn.getMatricula() << " - " << fn.getNome() << " - R$ " << fn.getSalario() << endl;
        }else{
            cn.setMatricula(mat);
            cn.setNome(nome);
            cn.setSalario(sal);
            cout << cn.getMatricula() << " - " << cn.getNome() << " - R$ " << cn.getSalario() << endl;
        }
    }

    return 0;
}
