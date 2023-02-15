#include "Local.h"

Local::Local(){}

Local::~Local()
{
    cout << "Deletando Local" << endl;
    delete insumosArr[0];
    delete insumosArr[1];
    delete insumosArr[2];
    delete insumosVec.at(0);
    delete insumosVec.at(1);
    delete insumosVec.at(2);
}

void Local::addInsumosArr(Insumo *in, int index){
    insumosArr[index] = in;
}
void Local::addInsumosVec(Insumo *in){
    insumosVec.push_back(in);
}
