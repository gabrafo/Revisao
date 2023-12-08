#include <iostream>
#include <fstream>

// Objetivo do programa: Ler um arquivo chamado "entrada.txt" contendo informações sobre alunos (nome, nota1, nota2),
// calcular a média de cada aluno e escrever no arquivo "saida.txt" o nome dos alunos cuja média é inferior a 7.0.

using namespace std;

int main(){
    string nome;
    int cont, cont1 = 0;
    float p1, p2, m;

    ifstream arq;
    arq.open("entrada.txt");
    arq >> cont;

    ofstream arq1;
    arq1.open("saida.txt");
    while (cont1 < cont) {
        arq >> nome >> p1 >> p2;
        m = (p1 + p2) / 2.0;
        if (m < 7.0) {
            arq1 << nome << endl;
        }
        cont1++;
    }

    arq1.close();
    arq.close();
    return 0;
}
