#include "Funcionario2.h"

Funcionario2::Funcionario2(){

}
//construtor que recebe o primeiro nome, sobrenome e salario como parametro e set eles
Funcionario2::Funcionario2(std::string pn, std::string sn, float s){
    if(s < 0){
        s = 0;
    }
    setPrimeiroNome(pn);
    setSobrenome(sn);
    setSalario(s);
}

//get e set do primeiro nome
std::string Funcionario2::getPrimeiroNome(){
    return primeiroNome;
}
void Funcionario2::setPrimeiroNome(std::string pn){
    primeiroNome = pn;
}
//get e set do sobrenome
std::string Funcionario2::getSobrenome(){
    return sobrenome;
}
void Funcionario2::setSobrenome(std::string sn){
    sobrenome = sn;
}
//get e set do salario
float Funcionario2::getSalario(){
    return salario;
}
void Funcionario2::setSalario(float s){
    salario = s;
}
//calcula o salario anual e retorna-o
float Funcionario2::getSalarioAnual(){
    return salario * 12;
}
//aumenta o salario em p vezes
void Funcionario2::aumentaSalario(float p){
    salario = salario + (salario*p);
}
