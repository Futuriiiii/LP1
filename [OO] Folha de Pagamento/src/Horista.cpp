#include "Horista.h"

Horista::Horista(){}

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
    :Funcionario(nome, matricula)
{
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}
double Horista::calculaSalario()
{
    double sal;

    if(horasTrabalhadas > 40){
        sal = salarioPorHora * 40;
        sal += salarioPorHora * (horasTrabalhadas - 40) * 1.5;
    }else{
        sal = salarioPorHora * horasTrabalhadas;
    }

    return sal*4;
}

Horista::~Horista(){}
