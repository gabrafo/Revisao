#include <iostream>
using namespace std;

// Objetivo do programa: Verificar se um ano fornecido pelo usuário é bissexto.
// O programa imprime 1 se o ano for bissexto e 0 caso contrário.

int main(){

    int ano;
    cin >> ano;
    if (((ano%400)==0) or (((ano % 4) == 0) and ((ano%100) != 0))){
    cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }


    return 0;
}