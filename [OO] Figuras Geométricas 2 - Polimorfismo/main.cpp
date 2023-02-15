#include <iostream>
#include "Triangulo.h"
#include "Retangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main(){
    FiguraGeometrica *fig;
    int tipo;

    while(1){
        cin >> tipo;
        if(tipo == 0){
            break;
        }
        switch(tipo){
        case 1:{
            fig = new Quadrado();
            fig->lerAtributosArea();
            cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
            break;}
        case 2:{
            fig = new Retangulo();
            fig->lerAtributosArea();
            cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
            break;}
        case 3:{
            fig = new Triangulo();
            fig->lerAtributosArea();
            cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
            break;}
        case 4:{
            fig = new Circulo();
            fig->lerAtributosArea();
            cout << fig->getNome() << " polimórfico de área " << fig->calcularArea() << endl;
            break;}
        }
    }

    return 0;
}
