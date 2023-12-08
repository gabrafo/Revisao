#include <iostream>
using namespace std;

/*
Este programa encontra o menor elemento em um vetor de inteiros.
Ele recebe um número inteiro (elementos) indicando o tamanho do vetor,
seguido pelos elementos do vetor.
Em seguida, a função recursiva 'menorElemento' é chamada e retorna o menor elemento no vetor.
*/

int menorElemento(int vetor[], int elementos, int cont, int menor){
    if (elementos == 1){
        return menor;
    }
    while (cont < elementos){
    if (vetor[cont]<menor){
        menor = vetor[cont];
    }
    return menorElemento(vetor, elementos, cont+1, menor);
    }
    return menor;
}

int main(){
    int elementos;
    cin >> elementos;
    int vetor[elementos];
    int cont = 0;
    for (int i=0;elementos>i;i++){
        cin >> vetor[i];
    }
    int menor = vetor[0];
    cout << menorElemento(vetor, elementos, cont, menor) << endl;
    return 0;
}