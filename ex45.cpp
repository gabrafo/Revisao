#include <iostream>
#include <fstream>

using namespace std;

// Objetivo: Copiar o conteúdo de um arquivo para outro

int main(){
    string nomeArq, nomeArq1;
    char texto;
    cin >> nomeArq >> nomeArq1;

    ifstream arq;
    arq.open(nomeArq);
    ofstream arq1;
    arq1.open(nomeArq1);
    arq >> texto;
    do {
        arq1 << texto;
    } while (arq >> texto);
    arq1.close();
    arq.close();
    return 0;
}