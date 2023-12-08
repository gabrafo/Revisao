#include <iostream>
using namespace std;

/*
Este programa realiza a busca binária em um vetor de inteiros ordenado.
Ele recebe um número inteiro (elementos) indicando o tamanho do vetor, seguido pelos elementos do vetor em ordem crescente.
Após a leitura dos elementos, o programa recebe o valor desejado a ser encontrado (wanted).
Em seguida, a função de busca binária é chamada e retorna a posição do elemento no vetor se encontrado, ou -1 caso contrário.
*/

int buscaElemento(int vetor[], int elementos, int wanted, int posInicial, int posFinal){
    if(posInicial<=posFinal){
        int posMeio = (posInicial+posFinal)/2;
    if (wanted>vetor[posMeio]){ // 1 2 3 4 5 6 7 8 9 10
    return buscaElemento(vetor, elementos, wanted, posMeio + 1, posFinal);
    } else if (wanted<vetor[posMeio]){
    return buscaElemento(vetor, elementos, wanted, posMeio - 1, posFinal);
    } else if (wanted == vetor[posMeio]){
        return posMeio;
    }
    }
    return -1;
}

int main(){
    int elementos;
    cin >> elementos; // 7
    int vetor[elementos];
    int wanted;
    for (int i=0;elementos>i;i++){
        cin >> vetor[i];
    }
    cin >> wanted;
    int posInicial = 0, posFinal = elementos-1;
    cout << buscaElemento(vetor, elementos, wanted, posInicial, posFinal) << endl;
    return 0;
}