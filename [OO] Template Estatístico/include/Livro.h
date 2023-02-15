#pragma once
#include <iostream>

using namespace std;

class Livro
{
    public:
        Livro();
        Livro(string titulo, int total);
        int getTotal();
        string toString();

    private:
        string titulo;
        int totalPaginas;
};

