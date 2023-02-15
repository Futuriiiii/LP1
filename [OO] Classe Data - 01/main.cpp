#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    Data dt1;
    Data dt2 = Data(4);
    Data *dt3 = new Data();

    //cout << "Digite a data: \n";
    cin >> dt1.dia;
    cin >> dt1.mes;
    cin >> dt1.ano;
    cout << dt1.dia << "/" << dt1.mes << "/" << dt1.ano << endl;
}
