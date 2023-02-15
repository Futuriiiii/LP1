#pragma once
#include <iostream>

class Invoice{

    public:
        Invoice();
        int numero;
        std::string desc;
        int quant;
        float preco;
        float getInvoiceAmount();

};

