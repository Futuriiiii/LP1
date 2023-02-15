#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){
}

//recebe uma despesa e uma posicao e adiciona a despesa ao vetor na posicao indicada
void ControleDeGastos::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}
//retorna a despesa da posicao indicada
Despesa ControleDeGastos::getDespesa(int pos){
    return despesas[pos];
}
//retorna o total das despesas
float ControleDeGastos::calculaTotalDeDespesas(){
    float total = 0;

    for(int i = 0; i < 100; i++){
        total += despesas[i].getValor();
    }
    return total;
}
//retorna o total das despesas de determinado tipo
float ControleDeGastos::calculaTotalDeDespesas(std::string tipo){
    float total = 0;

    for(int i = 0; i < 100; i++){
        if(despesas[i].getTipoDeGasto() == tipo){
            total += despesas[i].getValor();
        }
    }
    return total;
}
//verifica se existe esse tipo de gasto
bool ControleDeGastos::existeDespesaDoTipo(std::string tipo){
    for(int i = 0; i < 100; i++){
        if(despesas[i].getTipoDeGasto() == tipo){
            return true;
        }
    }
    return false;
}
