#include <iostream>
using namespace std;

// Objetivo do programa: Receber dois caracteres e imprimir na tela o de maior valor na tabela ASCII.

int main(){

    char a, b;
    cin >> a >> b;

    if (a > b){
        cout << a << endl;
    } else {
        cout << b << endl;
    }
    return 0;
}