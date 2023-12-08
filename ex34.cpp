#include <iostream>
using namespace std;

/*
Este programa calcula o fatorial duplo de um número. O fatorial duplo é o produto de todos os inteiros positivos 
ímpares menores ou iguais ao número de entrada.
*/

int fatorialDuplo(int num, int res){
    if (num == 0){
        return 1;
    }
    while ((num-2)>=1){
    num = num-2;
    res*=(num);
    fatorialDuplo(num, res);
    }
    return res;
}

int main(){
    int num;
    cin >> num;
    int res = num;
    cout << fatorialDuplo(num, res) << endl;
    return 0;
}