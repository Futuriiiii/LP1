#include <iostream>
#include "Eleitor.h"
#include "GerenciadorEleitores.h"

using namespace std;

int main()
{
    GerenciadorEleitores ge;
    string nome, titulo;
    int N, idade;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++){
        getline(cin, nome);
        cin >> idade;
        cin.ignore();
        getline(cin, titulo);

        ge.cadastrarEleitor(nome, idade, titulo);

        ge.verificaEleitor();

    }

    return 0;
}
