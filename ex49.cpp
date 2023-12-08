#include <iostream>
#include <fstream>
using namespace std;

// O programa lê dois conjuntos de números reais de um arquivo e os organiza em duas matrizes 3x4.
// Em seguida, soma os elementos correspondentes das duas matrizes e exibe a matriz resultante na tela.

int main(){
    ifstream arq;
    arq.open("entrada.txt");
    float matrizA[3][4], matrizB[3][4], matrizC[3][4];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            arq >> matrizA[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            arq >> matrizB[i][j];
        }
    }
    arq.close();
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            matrizC[i][j] = matrizA[i][j]+matrizB[i][j];
            cout << matrizC[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}