#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Objetivo do programa: Ler oito números reais de um arquivo chamado "dados.txt",
// calcular a média desses números e salvar o resultado no arquivo "media.txt" com precisão de três casas decimais.

int main(){
    float n1, n2, n3, n4, n5, n6, n7, n8;

    fstream arq, arq1;
    arq.open("dados.txt", ios::in);
    arq >> n1;
    arq >> n2;
    arq >> n3;
    arq >> n4;
    arq >> n5;
    arq >> n6;
    arq >> n7;
    arq >> n8;
    arq.close();

    arq1.open("media.txt", ios::out);
    arq1 << fixed <<  setprecision(3) << (n1+n2+n3+n4+n5+n6+n7+n8)/float(8) << endl;
    arq1.close();

    return 0;
}