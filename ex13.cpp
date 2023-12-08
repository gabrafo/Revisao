#include <iostream>
#include <fstream>
using namespace std;

// Objetivo do programa: Receber o nome de um arquivo, abrir o arquivo em modo de leitura, escrita e anexo.
// O programa lê a primeira palavra do arquivo e a imprime no console.

int main(){
    string nomeDoArquivo, msg;
    cin >> nomeDoArquivo;

    fstream arq;
    arq.open(nomeDoArquivo, ios::in | ios::out | ios::app);
    arq >> msg;
    cout << msg << endl;
    arq.close();
    return 0;
}