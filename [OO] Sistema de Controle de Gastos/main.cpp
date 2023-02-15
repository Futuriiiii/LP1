#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main(){
    int quant, contador = 0;
    float val;
    string nom, tip, qual;

    cin >> quant;
    getchar();

    Despesa dsp[quant];
    ControleDeGastos ctrl;

    for(int i = 0; i < quant; i++){
        getline(cin, nom);
        cin >> val;
        getchar();
        getline(cin, tip);

        dsp[i].setNome(nom);
        dsp[i].setValor(val);
        dsp[i].setTipoDeGasto(tip);
        ctrl.setDespesa(dsp[i], i);

    }
    getline(cin, qual);
    for(int i = 0; i < quant; i++){
        if(ctrl.existeDespesaDoTipo(qual)){
            if(dsp[i].getTipoDeGasto() == qual){
                cout << dsp[i].getNome() << ", " << "R$ " <<dsp[i].getValor() << endl;
            }
        }else{
            contador++;
        }
        if(contador == quant){
            cout << "Nenhuma despesa do tipo especificado" << endl;
        }
        if(i == quant-1){
            cout << "Total: "<< ctrl.calculaTotalDeDespesas(qual) << "/" << ctrl.calculaTotalDeDespesas() << endl;
        }
    }


    return 0;
}
