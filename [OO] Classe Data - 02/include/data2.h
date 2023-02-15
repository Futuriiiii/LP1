#pragma once
#include <iostream>

class Data2{

    private:
        int dia, mes, ano;
        std::string mesesStr[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    public:
        Data2();
        //set e get do dia
        void setDia(int d);
        int getDia();
        //set e get do mes
        void setMes(int m);
        int getMes();
        //set e get do ano
        void setAno(int a);
        int getAno();
        //printData para exibir
        void printData();

};
