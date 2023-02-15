#pragma once

class Data3{

    public:
        Data3();
        Data3(int d, int m, int a);
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
        void avancarDia();

    private:
        int dia, mes, ano;
};

