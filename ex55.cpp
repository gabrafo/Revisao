#include <iostream>
using namespace std;

// Objetivo do programa: Realizar uma busca binária recursiva em um vetor ordenado, buscando um número específico.
// O programa recebe o tamanho do vetor, os elementos ordenados, o número a ser procurado e retorna a posição do elemento no vetor,
// ou -1 caso o elemento não seja encontrado.

int taNoVetor(int vetor[], int inicio, int final, int wanted){
    int meio = (inicio+final)/2;
    while(inicio<=final){
    if (wanted>vetor[meio]){
        return taNoVetor(vetor, meio+1, final, wanted);
    } else if (wanted<vetor[meio]){
        return taNoVetor(vetor, inicio, meio-1, wanted);
    } else if (wanted==vetor[meio]){
        return meio;
    }
    }
    return -1;
}

int main(){
    int tamanho, wanted;
    cin >> tamanho;
    int vetor[tamanho];
    for (int i = 0; i<tamanho; i++){
        cin >> vetor[i];
    }
    cin >> wanted;
    int posInicio = 0, posFinal = tamanho-1;
    cout << taNoVetor(vetor, posInicio, posFinal, wanted) << endl;

    return 0;
}