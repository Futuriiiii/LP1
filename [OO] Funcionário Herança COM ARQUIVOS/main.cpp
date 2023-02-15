#include <iostream>
#include <vector>
#include <fstream>
#include "Consultor.h"

using namespace std;

vector<Funcionario*> lerArquivo(){
    vector<Funcionario*> func;
    Funcionario *f;
    fstream fs;
    int tipo;
    string mat, nome;
    float sal, per;
    fs.open("dados.txt", fstream::in);
    if(!fs.is_open()){
        cout << "Erro ao abrir arquivo para leitura\n";
        return func;
    }
    while(1){
        fs >> tipo;
        if(fs.eof()){
            break;
        }
        fs.ignore();
        getline(fs, mat);
        getline(fs, nome);
        fs >> sal;
        if(tipo == 1){
            f = new Funcionario();
        }else if(tipo == 2){
            fs >> per;
            f = new Consultor(per);
        }
        f->setMatricula(mat);
        f->setNome(nome);
        f->setSalario(sal);
        func.push_back(f);
    }
    fs.close();
    return func;
}

void salvarArquivo(vector<Funcionario*> func){
    fstream fs;
    fs.open("dados.txt", fstream::out);
    if(!fs.is_open()){
        cout << "Erro ao abrir arquivo para escrita\n";
        return;
    }
    for(int i = 0; i < (int)func.size(); i++){
        fs << func[i]->getTipo() << endl;
        fs << func[i]->getMatricula() << endl;
        fs << func[i]->getNome() << endl;
        fs << func[i]->getSalario() << endl;
        if(func[i]->getTipo() == 2){
            fs << ((Consultor*)func[i])->getPercentual() << endl;
        }
    }
    fs.close();
}

int main(){
    int N, tipo;
    float sal, per;
    string mat, nome;
    Funcionario *f;
    vector<Funcionario*> func;

    /*cin >> N;

    for(int i = 0; i < N; i++){
        cin >> tipo;
        switch(tipo){
            case 1:
                f = new Funcionario();
                break;
            case 2:
                cin >> per;
                f = new Consultor(per);
                break;
        }
        cin.ignore();
        getline(cin, mat);
        getline(cin, nome);
        cin >> sal;
        cin.ignore();
        f->setMatricula(mat);
        f->setNome(nome);
        f->setSalario(sal);
        func.push_back(f);
    }*/

    func = lerArquivo();
    for(int i = 0; i < (int)func.size(); i++){
        cout << func[i]->getMatricula() << " - " << func[i]->getNome() << " - R$ " << func[i]->getSalario();
        if(func[i]->getTipo() == 2){
            cout << " - Per: " << ((Consultor*)func[i])->getPercentual();
        }
        cout << endl;
    }
    //salvarArquivo(func);

    return 0;
}
