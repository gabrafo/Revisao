#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Objetivo do programa: Receber um número de três dígitos, calcular a soma de seus dígitos
// e o produto desses dígitos, armazenando o resultado do produto em um arquivo de saída chamado "saida.txt".

int main(){
    int num, num1;
    int c, d, u;
    cin >> num;
    if (num >=100 and num <= 999){
        num1 = num;
    }
    c = num1/100;
    d = (num1%100)/10;
    u = (num1%100)%10; 
    cout << c + d + u << endl;

    ofstream arq;
    arq.open("saida.txt");
    arq << c*d*u << endl;
    arq.close();
    return 0;
}