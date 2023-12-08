#include <iostream>
using namespace std;

// Objetivo do programa: Utilizando operadores lógicos, o programa avalia as condições dos valores inteiros
// e imprime o valor de "valor3" se "valor1" for verdadeiro, "valor2" falso e "valor3" for igual a 5.
// Caso contrário, imprime "santos".

int main(){

    int valor1 = 10, valor2 = 20, valor3 = 5;
    if (valor1 and !valor2 and (valor3==5)){
        cout << valor3 << endl;
    } else {
        cout << "santos" << endl;
    }



    return 0;
}