#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
    int quant;
    string nome, telefone, rua, numero, bairro, cidade, estado, cep;

    cin >> quant;
    cin.ignore();

    Pessoa p[quant];
    Endereco e;

    for(int i = 0; i < quant; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        getline(cin, numero);
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, cep);
        e = Endereco(rua, numero, bairro, cidade, estado, cep);

        p[i].setNome(nome);
        p[i].setTelefone(telefone);
        p[i].setEndereco(e);
    }

    for(int i = 0; i < quant; i++){
        cout << p[i].toString() << endl;
        if(i != quant-1){
            cout << endl;
        }
    }

    return 0;
}
