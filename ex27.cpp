#include <iostream>

using namespace std;

/*
Esse código recebe 10 números inteiros, verifica quais são pares e múltiplos de 3, armazena-os em arrays separados 
exibe esses números junto com o maior número par e o maior número múltiplo de 3 encontrados.
*/

int main()
{
    int num[10], maior2 = 0, maior3 = 0, cont2 = 0, cont3 = 0, i = 0;

    while (i<10){
        cin >> num[i];
        if (num[i]%2==0){
            cont2++;
            if (num[i]>maior2){
                maior2 = num[i];
            }
        } if (num[i]%3==0){
            cont3++;
            if (num[i]>maior3){
                maior3 = num[i];
            }
        }
        i++;
    }

    int mult2[cont2], mult3 [cont3];

    cont2 = 0;
    cont3 = 0;

    for (int i=0;10>i;i++){
        if (num[i]%2==0){
            mult2[cont2] = num[i];
            cont2++;
        }
    }

    for (int i=0;10>i;i++){
        if (num[i]%3==0){
            mult3[cont3] = num[i];
            cont3++;
        }
    }

    for (int cont = 0; cont2>cont; cont++){
       cout << mult2[cont] << " ";
    }

    cout << endl << maior2 << endl;

    for (int cont = 0; cont3>cont; cont++){
       cout << mult3[cont] << " ";
    }

    cout << endl << maior3 << endl;

    return 0;
}