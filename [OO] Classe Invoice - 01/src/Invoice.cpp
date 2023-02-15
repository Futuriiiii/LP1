#include "Invoice.h"
#include <iostream>

float Invoice::getInvoiceAmount(){
    return preco * quant;
}

Invoice::Invoice(){

}
