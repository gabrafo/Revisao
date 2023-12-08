#include <iostream>

using namespace std;

/*
Este programa calcula o logaritmo na base 3 de um número inteiro dado. O logaritmo na base 3 é determinado pelo 
número de vezes que o número pode ser dividido por 3 até que se torne igual a 3 ou menor que 3.

Por exemplo, para um número 243, o logaritmo na base 3 seria 5, pois 243 pode ser dividido por 3 cinco vezes 
(243 ÷ 3 = 81, 81 ÷ 3 = 27, 27 ÷ 3 = 9, 9 ÷ 3 = 3, 3 ÷ 3 = 1).

Observação: Se o número de entrada não for uma potência de 3, o programa não retornará um valor exato de logaritmo.
*/

int logaritmo(int num, int cont){
    while(num%3==0){
    if (num == 3){
        cont ++;
        return cont;
    } else if (num>3){
        cont ++;
        return (logaritmo(num/3, cont));
    }
    }
    return cont;
}

// 243/3 quantas vezes fosse possível e retornar quantas vezes o número foi dividido

int main(){
    int num;
    int cont = 0;
    cin >> num;
    cout << logaritmo(num, cont) << endl;
    return 0;
}