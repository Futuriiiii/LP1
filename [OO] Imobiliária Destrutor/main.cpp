#include "Imovel.h"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Imobiliaria.h"

int main()
{
    Imobiliaria imo;
    Imovel *im;
    int N, tipo;
    string buscar;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> tipo;
        if(tipo == 1){
            im = new Casa();
            im->lerAtributos();
        }else if(tipo == 2){
            im = new Apartamento();
            im->lerAtributos();
        }else if(tipo == 3){
            im = new Terreno();
            im->lerAtributos();
        }
        imo.addImovel(im);
    }
    cin.ignore();
    getline(cin, buscar);
    imo.buscar(buscar);

    return 0;
}
