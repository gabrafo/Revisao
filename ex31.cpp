#include <iostream>

using namespace std;

/*
Este programa verifica se os números armazenados em um array de tamanho 9 são primos.
Ele percorre o array e para cada número, verifica se é divisível apenas por 1 e por ele mesmo.
Se for, imprime o número e sua posição no array.
*/

void ehPrimo(int lista[9]){
    for (int i=0;9>i;i++){
        int cont = 0;
        for (int num=1;lista[i]>=num;num++){
            if(lista[i]%num==0){
                cont++;
            }
        }
            if(cont==2){
            cout << lista[i] << " " << i << endl;
            }
    }
}

int main()
{
    int lista[9];

    for (int i=0;9>i;i++){
        cin >> lista[i];
    }

    ehPrimo(lista);

    return 0;
}