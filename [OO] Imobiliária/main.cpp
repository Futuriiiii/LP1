#include <iostream>
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"

using namespace std;

int main(){
    int quant, t;

    cin >> quant;
    for(int i = 0; i < quant; i++){
        cin >> t;
        switch(t){
        case 1:
            {
                Casa im;
                im.lerAtributos();
                im.exibeAtributos();
                break;
            }
        case 2:
            {
                Apartamento im;
                im.lerAtributos();
                im.exibeAtributos();
                break;
            }
        case 3:
            {
                Terreno im;
                im.lerAtributos();
                im.exibeAtributos();
                break;
            }

        }
    }

    return 0;
}
