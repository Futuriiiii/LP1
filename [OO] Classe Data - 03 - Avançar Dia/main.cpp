#include <iostream>
#include "Data3.h"

using namespace std;

int main(){
    int d, m, a, pular;
    Data3 dt;

    cin >> d;
    cin >> m;
    cin >> a;
    cin >> pular;

    dt = Data3(d, m, a);

    for(int i = 0; i < pular; i++){
        dt.avancarDia();
    }

    if(dt.getDia() < 10){
        cout << "0" << dt.getDia() << "/";
    }else{
        cout << dt.getDia() << "/";
    }

    if(dt.getMes() < 10){
        cout << "0" << dt.getMes() << "/";
    }else{
        cout << dt.getMes() << "/";
    }
    cout << dt.getAno() << endl;

    return 0;
}
