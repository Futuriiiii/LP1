#include <iostream>
#include "data2.h"

using namespace std;

int main(){
    int d, m, a;
    Data2 dt;

    cin >> d;
    cin >> m;
    cin >> a;

    dt.setDia(d);
    dt.setMes(m);
    dt.setAno(a);
    dt.printData();

    return 0;
}
