#include <iostream>

using namespace std;

int main(){
    //quantos numeros serao lidos e se algum numero se repete
    int quant, rep;
    
    cin >> quant;
    //cria um vetor para armazenar os numeros lidos e um para auxiliar
    int vetor[quant], aux[quant];

    //for para ler os numeros e guardar nos vetores
    for(int i = 0; i < quant; i++){
        cin >> vetor[i];
        aux[i] = vetor[i];
    }
    //compara cada elemento de um vetor com cada elemento do outro para saber se existe algum repetido
    for(int i = 0; i < quant; i++){
        rep = 0;
        for(int j = 0; j < quant; j++){
            if(vetor[j] == aux[i] && vetor[j] != 0){
            rep++;
                if(rep > 1){
                    vetor[j] = 0;
                }
            }
        }
    }
    //imprime o vetor resultante sem mostrar os 0s
    for(int i = 0; i < quant; i++){
        if(vetor[i] != 0){
            cout << vetor[i];
            //se ainda n for o ultimo elemento do vetor, imprime um espaço
            if(i != quant - 1){
                cout << " ";
            }
        }
    }
    //pula a linha ao fim da impressão
    cout << "\n";

    return 0;
}