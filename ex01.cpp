#include <iostream>
#include <fstream> // F é de file

using namespace std;

/*
Objetivo do programa:
O programa em C++ permite ao usuário escrever uma mensagem em um arquivo de texto chamado "ex01.txt" e, em seguida, ler e
exibir essa mensagem do arquivo.
*/

int main(){
    cout << "Leitura e Escrita em Arquivo de Texto" << endl;
    string texto;
    fstream arq1;

    arq1.open("ex01.txt", ios::out); // ios::out = Escrita de dados, ios::in = Leitura de dados
    // ios::app = Abre pra escrita sem remover o conteúdo atual, além de criar o arquivo caso ele não exista
    cout << "Escreva uma mensagem:" << endl;
    cin >> texto;
    arq1 << texto << "\n";
    arq1.close();

    arq1.open("ex01.txt", ios::in);
    string linha;
    cout << "Mensagem digitada: " << endl;
    if(arq1.is_open()){
        while(getline(arq1, linha)) // Lê o conteúdo do arquivo
        cout << linha << endl; // Imprime o conteúdo do arquivo
    } else{
        cout << "Não foi possível abrir o arquivo." << endl;
    }
    arq1.close();
    return 0;
}