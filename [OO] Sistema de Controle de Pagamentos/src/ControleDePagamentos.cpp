#include "ControleDePagamentos.h"
#include <string>

ControleDePagamentos::ControleDePagamentos(){}

void ControleDePagamentos::setPagamento(Pagamento p, int index){
    pagamentos[index] = p;
}
Pagamento ControleDePagamentos::getPagamento(int pos){
    return pagamentos[pos];
}

float ControleDePagamentos::calculaTotalDePagamentos(){
    float total;
    for(int i = 0; i < MAX; i++){
        total = pagamentos[i].getValorPagamento() + total;
    }
    return total;
}

int ControleDePagamentos::getIndexFuncionario(string n){
    for(int i = 0; i < MAX; i++){
        if(pagamentos[i].getNomeDoFuncioanario().find(n) != string::npos){
            return i;
        }
    }
    return -1;
}
