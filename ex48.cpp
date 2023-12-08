#include <iostream>
#include <fstream>
using namespace std;

// O programa lê duas matrizes A[3x2] e B[3x2] de um arquivo "entrada.txt" e calcula a diferença de cada elemento da matriz A pelo elemento correspondente na matriz B.
// Em seguida, exibe na tela a matriz C resultante da diferença entre A e B.

int main(){
    ifstream arq;
    arq.open("entrada.txt");
    float matrizA[3][2], matrizB[3][2], matrizC[3][2];
    for (int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
        arq >> matrizA[i][j];
        }
    }
    for (int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
        arq >> matrizB[i][j];
        }
    }
    arq.close();

    for (int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
        matrizC[i][j] = matrizA[i][j]-matrizB[i][j];
        cout << matrizC[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}