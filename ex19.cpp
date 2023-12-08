#include <fstream>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Objetivo do programa: Ler dois valores (preço e convite) de um arquivo chamado "teatro.txt",
// calcular o número necessário de convites para lotar o teatro com base no preço do ingresso
// e salvar esse valor arredondado para cima em um arquivo chamado "convite.txt".

int main(){

    float preco, convite;

    fstream arq, arq1;
    arq.open("teatro.txt", ios::in);
    arq >> preco;
    arq >> convite;
    arq.close();

    cout << fixed << setprecision(2) << ceil((float(preco)/convite)) << endl;

    arq1.open("convite.txt", ios::out);
    arq1 << fixed << setprecision(2) << ceil((float(preco)/convite)) << endl;
    arq1.close();
    return 0;
}