#include <fstream>
#include <iostream>
using namespace std;

// Objetivo do programa: Ler duas strings de dois arquivos fornecidos pelo usuário,
// concatenar essas strings e salvar a concatenação em um terceiro arquivo.

int main(){

    string nomeArquivo, nomeArquivo1, nomeArquivo2, msg, msg1;
    cin >> nomeArquivo >> nomeArquivo1 >> nomeArquivo2;

    fstream arq, arq1, arq2;
    arq.open(nomeArquivo, ios::in);
    arq >> msg;
    arq.close();

    arq1.open(nomeArquivo1, ios::in);
    arq1 >> msg1;
    arq1.close();

    arq2.open(nomeArquivo2, ios::out);
    arq2 << msg << " " << msg1 << endl;
    arq2.close();

    return 0;
}