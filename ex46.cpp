#include <iostream>
#include <fstream>

using namespace std;

// Objetivo: Ler dados de dois arquivos e escrever os dados lidos em um terceiro arquivo, alternando entre as leituras.

int main(){
    string nomeArq, nomeArq1, nomeArq2, txt, txt1;
    cin >> nomeArq >> nomeArq1 >> nomeArq2;

    ifstream arq;
    arq.open(nomeArq);
    arq >> txt;
    ifstream arq1;
    arq1.open(nomeArq1);
    arq1 >> txt1;
    ofstream arq2;
    arq2.open(nomeArq2);
    do{
        arq2 << txt << ": " << txt1 << endl;
        } while (arq >> txt and arq1 >> txt1);
    arq2.close();
    arq1.close();
    arq.close();
    return 0;
}