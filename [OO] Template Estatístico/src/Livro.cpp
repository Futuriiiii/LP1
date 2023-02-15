#include "Livro.h"

Livro::Livro(){

}

Livro::Livro(string titulo, int total){
    this->titulo = titulo;
    totalPaginas = total;
}
int Livro::getTotal(){
    return totalPaginas;
}
string Livro::toString(){
    string str;

    str = titulo + ", páginas: " + to_string(totalPaginas);
    return str;
}
