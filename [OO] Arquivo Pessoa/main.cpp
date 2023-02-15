#include <fstream>
#include <vector>
#include "Pessoa.h"

void geraArquivo(string path, string data) {
    fstream fs;
    fs.open(path.c_str(), fstream::out);
    if (fs.is_open()) {
        fs.write(data.c_str(), data.size());
        fs.close();
    } else
        cout << "Nao foi possivel abrir o arquivo " << path;
}
void geraArquivos() {
    string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                  "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
                  "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
                  "1\nDenis Carlos\n(83) 5555-5555\n";
    string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                  "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                  "1\nJonas Luz\n(83) 3333-3333\n";
    geraArquivo("dados01.txt", data1);
    geraArquivo("dados02.txt", data2);
}


int main()
{
    vector<Pessoa> vecPs;
    Pessoa ps;
    fstream fs;
    string dado;
    int tipo;
    string nome, telefone, cpf;

    geraArquivos();

    getline(cin, dado);

    fs.open(dado, fstream::in);
    if(!fs.is_open()){
            cout << "Erro ao abrir arquivo para leitura\n";
    }
    while(1){
        if(fs.eof()){
            break;
        }
        fs >> tipo;
        fs.ignore();
        getline(fs, nome);
        getline(fs, telefone);
        if(tipo == 1){
            ps.addPessoa1(nome, telefone);
        }else{
            getline(fs, cpf);
            ps.addPessoa2(nome, telefone, cpf);
        }
        vecPs.push_back(ps);
    }
    fs.close();

    for(int i = 0; i < vecPs.size()-1; i++){
        vecPs[i].exibePessoa();
    }

    return 0;
}
