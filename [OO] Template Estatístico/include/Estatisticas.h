#pragma once
#include <vector>

using namespace std;

template <class T>

class Estatisticas
{
    public:
        Estatisticas(){}
        int indexOfMaior(vector<T> vec){
            float maior = vec[0].getTotal();
            int indMaior = 0;
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() > maior){
                    maior = vec[i].getTotal();
                    indMaior = i;
                }
            }
            return indMaior;
        }
        int indexOfMenor(vector<T> vec){
            float menor = vec[0].getTotal();
            int indMenor = 0;
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() < menor){
                    menor = vec[i].getTotal();
                    indMenor = i;
                }
            }
            return indMenor;
        }
        float media(vector<T> vec){
            float total = 0;

            for(int i = 0; i < vec.size(); i++){
                total += vec[i].getTotal();
            }
            return total/vec.size();
        }
    protected:

    private:
};

