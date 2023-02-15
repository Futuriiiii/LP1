#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nome, string num, double salmen)
    : Conta(nome, num, salmen)
{
    definirLimite();
}

void ContaEspecial::definirLimite(){
    limite = salarioMensal * 3;
}
