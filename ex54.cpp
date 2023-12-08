#include <iostream>
using namespace std;

// Objetivo do programa: Realizar uma busca sequencial em um vetor de caracteres para encontrar um elemento específico.
// O programa recebe o número de caracteres, os caracteres separados por espaços e um caracter a ser buscado.
// Em seguida, imprime os índices no vetor onde o elemento procurado foi encontrado. Se não encontrar, imprime -1.

void buscaSequencial(char vetor[], int tamanho, char elementoProcurado, int cont, int contProc){
    if(vetor[cont] == elementoProcurado and tamanho > 0){
        cout << cont << " ";
        return buscaSequencial(vetor, tamanho-1, elementoProcurado, cont+1, contProc+1);
    } else if(vetor[cont]!=elementoProcurado and tamanho > 0){
        return buscaSequencial(vetor, tamanho-1, elementoProcurado, cont+1, contProc);
    } else if (tamanho == 0 and contProc == 0){
        cout << "-1" << endl;
    }
}

int main(){
    int tamanho;
    cin >> tamanho;
    char vetor[tamanho];
    for (int i = 0; i<tamanho; i++){
        cin >> vetor[i];
    }
    char elemento;
    cin >> elemento;
    int contador = 0, contadorElProc = 0;
    buscaSequencial(vetor, tamanho, elemento, contador, contadorElProc);

    return 0;
}