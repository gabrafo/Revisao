#include <iostream>
#include <fstream>

using namespace std;

// Objetivo: Calcular o valor total das vendas de ingressos, aplicando descontos de acordo com o dia e categoria.

int main(){
    char cat;
    int dia;
    float valor, soma;

    ifstream arq;
    arq.open("ingresso.txt");
    arq >> valor >> dia >> cat;
    do {
        if (dia >= 6 and dia <= 13){
            if (cat == 'E'){
                soma += valor*0.85;
            } else if (cat == 'A'){
                soma += valor*0.90;
            }
        } else if (dia > 13 and dia <= 24){
            if (cat == 'E'){
                soma += valor*0.90;
            } else if (cat == 'A'){
                soma += valor*0.95;
            }
        } else {
            soma+=valor;
        }
    } while (arq >> dia >> cat);
    cout << soma << endl;
    arq.close();

    return 0;
}