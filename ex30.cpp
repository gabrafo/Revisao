#include <iostream>

using namespace std;

/*
Este programa conta a quantidade de números positivos e calcula a soma dos números negativos 
em um array de 10 elementos.
Ele percorre o array e verifica cada elemento para contar os números positivos e calcular a 
soma dos números negativos.

- A função 'positivos' conta e retorna a quantidade de números positivos no array.
- A função 'negativos' calcula e retorna a soma dos números negativos no array.

Em seguida, são exibidos na tela a quantidade de números positivos e a soma dos números negativos.
*/

int positivos(float lista[10]){
    int cont = 0;
    for (int i=0;10>i;i++){
        if(lista[i]>=0){
            cont++;
        };
    }
    return cont;
}

float negativos(float lista[10]){
    float soma = 0;
    for (int i=0;10>i;i++){
        if(lista[i]<0){
            soma+=lista[i];
        };
    }
    return soma;
}

int main()
{
    float lista[10];

    for (int i=0;10>i;i++){
        cin >> lista[i];
    }

    cout << positivos(lista) << endl;
    cout << negativos(lista) << endl;

    return 0;
}