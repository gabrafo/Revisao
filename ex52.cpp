#include <iostream>
using namespace std;

/*
O objetivo do programa é realizar a rotação de uma matriz 6x6 em 180 graus no sentido horário. A entrada consiste nos elementos
da matriz, e a saída é a matriz original rotacionada. Cada linha da matriz é lida da esquerda para a direita, de cima para baixo.
*/

int main(){

    int matriz[6][6], matrizRot[6][6];

    for (int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            matrizRot[i][j] = matriz[5-i][5-j];
        }
    }

    for (int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            cout << matrizRot[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}