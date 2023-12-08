#include <iostream>
#include <fstream>
using namespace std;

// Objetivo do programa: Receber o nome de um arquivo e uma mensagem, abrir o arquivo em modo de truncamento (apaga o conteúdo existente).
// O programa escreve a mensagem no arquivo e imprime a mensagem no console.

int main(){
    string nomeDoArquivo, msg;
    cin >> nomeDoArquivo >> msg;

    ofstream arq;
    arq.open(nomeDoArquivo, ios::trunc);
    arq << msg;
    cout << msg << endl;
    arq.close();
    return 0;
}