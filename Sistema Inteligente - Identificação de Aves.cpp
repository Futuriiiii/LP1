#include <iostream>

using namespace std;

int main(){
    // um array bi dimensional com os animais nas linhas e a caracteristica nas colunas
    int reg[10][5]{0, 1, 0, 1, 1,   // coruja
                   0, 0, 0, 1, 0,   // pardal
                   0, 0, 1, 1, 0,   // galinha
                   0, 1, 0, 0, 0,   // ema
                   0, 1, 0, 1, 0,   // falcao
                   1, 0, 0, 1, 0,   // pato
                   1, 1, 0, 0, 0,   // pinguim
                   1, 1, 0, 1, 0,   // gaivota
                   1, 1, 0, 1, 1,   // garca
                   0, 0, 0, 0, 0,   // avestruz
                                             };
    // um array de string com o nome do animal
    string nome[10]{"coruja", "pardal", "galinha", "ema", "falcão", "pato", "pinguim", "gaivota", "garça", "avestruz"};
    //um array de int para ler as caracteristicas do animal
    int animal[5];

    //ler as caracteristicas
    for(int i = 0; i < 5; i++){
        cin >> animal[i];
    }
    //o indice i indica qual animal esta sendo comparada
    for(int i = 0; i < 10; i++){
        //uma variavel "igual" para saber se os numeros lidos e os numeros do animal que esta sendo analisado coincidem 
        int igual = 0;
        //o indice j indica qual caracteristica esta sendo comparada 
        for(int j = 0; j < 5; j++){
            if(animal[j] == reg[i][j]){
                //se as caracteristicas forem iguais, incrementa "igual" em 1
                igual++;
            }
        }
        //se as caracteristicas lidas coincidirem com todas as do animal analisado, imprime que animal eh esse
        if(igual == 5){
            cout << nome[i] << endl;
            break;
        }
    }

    return 0;
}