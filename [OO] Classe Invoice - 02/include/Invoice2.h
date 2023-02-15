#pragma once
#include <iostream>

class Invoice2{

    public:
        Invoice2();
        Invoice2(int n, std::string d, int q, float p);
        float getInvoiceAmount();
        void print();

        void setNum(int n);
        int getNum();

        void setDesc(std::string d);
        std::string getDesc();

        void setQuant(int q);
        int getQuant();

        void setPreco(float p);
        float getPreco();

    private:
        int numero;
        std::string desc;
        int quant;
        float preco;

};

