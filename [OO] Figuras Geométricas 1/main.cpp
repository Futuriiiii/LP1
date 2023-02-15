#include <iostream>
#include "Quadrado.h"
#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){
    int tipo;

    while(1){
        cin >> tipo;
        if(tipo == 0){
            break;
        }
        switch(tipo) {
        case 1:{
            Quadrado fig;
            fig.lerAtributosArea();
            cout << fig.getNome() << " de área " << fig.calcularArea() << endl;
            break;}
        case 2:{
            Retangulo fig;
            fig.lerAtributosArea();
            cout << fig.getNome() << " de área " << fig.calcularArea() << endl;
            break;}
        case 3:{
            Triangulo fig;
            fig.lerAtributosArea();
            cout << fig.getNome() << " de área " << fig.calcularArea() << endl;
            break;}
        case 4:{
            Circulo fig;
            fig.lerAtributosArea();
            cout << fig.getNome() << " de área " << fig.calcularArea() << endl;
            break;}
        }
    }


    return 0;
}
