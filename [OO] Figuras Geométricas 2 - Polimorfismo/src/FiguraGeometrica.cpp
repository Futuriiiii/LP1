#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){}

FiguraGeometrica::FiguraGeometrica(int t){
    tipo = t;
}

string FiguraGeometrica::getNome(){
    return nome;
}
