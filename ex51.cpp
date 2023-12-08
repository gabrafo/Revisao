#include <iostream>
using namespace std;

/*
O Objetivo do programa é realizar a rotação de uma matriz 6x6 em 180 graus no sentido horário. Ele recebe os elementos da matriz
como entrada e exibe a matriz original rotacionada como saída. Cada linha da matriz é lida da esquerda para a direita, de cima
para baixo.
*/

bool ehTriangulo(int i, int j){
    if (i==6){
        return true;
    } else if (i==5 and j>0 and j<6){
        return true;
    } else if (i==4 and j>1 and j<5){
        return true;
    } else if (i == 3 and j == 3){
        return true;
    }
    return false;
}


int main(){
    int matriz[7][7];

    for (int i = 0; i<7;i++){
        for (int j = 0; j<7;j++){
        cin >> matriz[i][j];
        }
    }

    int somaT = 0, somaF = 0;

    for (int i = 0; i<7;i++){
        for (int j = 0; j<7;j++){
        if (ehTriangulo(i, j)){
            somaT += matriz[i][j];
        } else {
            somaF += matriz[i][j];
        }
        }
    }

    cout << somaT << " " << somaF << endl;

    return 0;
}