#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Objetivo do programa: Ler três pares de números inteiros (número e média) de um arquivo chamado "notas.txt",
// calcular a média ponderada dos valores e escrever o resultado no arquivo "final.txt" com precisão de duas casas decimais.

int main(){

    int num1, num2, num3;
    int media1, media2, media3;

    ifstream arq;
    arq.open("notas.txt");
    arq >> num1 >> media1;
    arq >> num2 >> media2;
    arq >> num3 >> media3;
    arq.close();

    ofstream arq1;
    arq1.open("final.txt");
    arq1 << fixed <<  setprecision(2) << float((num1*media1)+(num2*media2)+(num3*media3))/(media1+media2+media3)<< endl;
    arq1.close();
    return 0;
}