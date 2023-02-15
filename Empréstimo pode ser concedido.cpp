#include <iostream>

using namespace std;

int main(){
    //variaveis para salario e emprestimo
    float sal, emp;
    // variavel para quantas prestacoes do emprestimo
    int qPrest;

    //le as 3 variaveis ate q sejam todas validas
    cin >> sal;
    while (1){
        if(sal <= 0){
            cin >> sal;
        }else break;
    }
    cin >> emp;
    while (1){
        if(emp <= 0){
            cin >> emp;
        }else break;
    }
    cin >> qPrest;
    while (1){
        if(qPrest <= 0){
            cin >> qPrest;
        }else break;
    }
    
    //verifica se as parcelas sao menores ou iguais a 30% do salario e aprova ou nega o emprestimo
    if(emp/qPrest <= sal*0.3){
        cout << "Emprestimo pode ser concedido" << endl;
    }else{
        cout << "Emprestimo nao pode ser concedido" << endl;
    }

    return 0;
}