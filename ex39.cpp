#include <iostream>
using namespace std;

/*
Este programa em C++ calcula a função F para um número inteiro positivo fornecido pelo usuário usando funções mutuamente
recursivas. A função F é definida de forma recursiva e usa a função H para calcular seu valor.
*/

unsigned int funcaoH(unsigned int x);

unsigned int funcaoF(unsigned int x){
    if (x>0 and x%2==0){
        return 2*funcaoH(x) + funcaoF(x-1);
    } else if (x>0 and x%2!=0){
        return 2*funcaoH(x) - funcaoF(x-1);
    }
    return 1;
}

unsigned int funcaoH(unsigned int x){
    if (x>0){
    return funcaoH(x-1) + funcaoF(x-1);
    }
    return 0;
}


int main(){
    unsigned int x;
    cin >> x;
    cout << funcaoF(x) << endl;
    return 0;
}