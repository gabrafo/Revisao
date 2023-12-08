#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Objetivo do programa: Abrir um arquivo chamado "entrada.txt", ler quatro números reais do arquivo,
// calcular a distância entre dois pontos (x1, y1) e (x2, y2) utilizando a fórmula da distância entre pontos,
// imprimir a distância calculada no console e sobrescrever o conteúdo do arquivo "entrada.txt" com esse valor.

int main(){
    float x1, y1, x2, y2;

    ifstream arq;
    arq.open("entrada.txt", ios::app);
    if(arq){
    arq >> x1;
    arq >> y1;
    arq >> x2;
    arq >> y2;
    }
    arq.close();

    ofstream arq1 ("entrada.txt");
    cout << sqrt(pow((x2-x1),2) + pow((y2-y1),2)) << endl;
    return 0;
}