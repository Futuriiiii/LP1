#include <iostream>
#include "Insumo.h"
#include "Local.h"
#include "Medicamento.h"
#include "Vacina.h"
#include "EPI.h"

using namespace std;

int main(){
    string nome, dt, fab, tipo, dos, adm, disp, desc;
    int quant, dose, dia;
    float val;
    Local loc;

    Insumo *in;

    getline(cin, nome);
    cin >> quant;
    cin >> val;
    cin.ignore();
    getline(cin, dt);
    getline(cin, fab);
    getline(cin, tipo);
    cin >> dose;
    cin >> dia;
    cin.ignore();

    in = new Vacina(nome, quant, val, dt, fab, tipo, dose, dia);
    loc.addInsumosArr(in, 0);
    in = new Vacina(nome, quant, val, dt, fab, tipo, dose, dia);
    loc.addInsumosVec(in);

    getline(cin, nome);
    cin >> quant;
    cin >> val;
    cin.ignore();
    getline(cin, dt);
    getline(cin, fab);
    getline(cin, dos);
    getline(cin, adm);
    getline(cin, disp);

    in = new Medicamento(nome, quant, val, dt, fab, dos, adm, disp);
    loc.addInsumosArr(in, 1);
    in = new Medicamento(nome, quant, val, dt, fab, dos, adm, disp);
    loc.addInsumosVec(in);

    getline(cin, nome);
    cin >> quant;
    cin >> val;
    cin.ignore();
    getline(cin, dt);
    getline(cin, fab);
    getline(cin, tipo);
    getline(cin, desc);

    in = new EPI(nome, quant, val, dt, fab, desc);
    loc.addInsumosArr(in, 2);
    in = new EPI(nome, quant, val, dt, fab, desc);
    loc.addInsumosVec(in);

    return 0;
}
