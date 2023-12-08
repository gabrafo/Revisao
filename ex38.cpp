#include <iostream>
using namespace std;

/*
Este programa em C++ usa uma função recursiva somaMult para calcular a multiplicação de dois números naturais através de
somas sucessivas. Ele recebe dois números naturais como entrada e retorna o resultado da multiplicação desses números.
*/

int somaMult(int n1, int n2, int n3){;
    if (n2 == 0){
        return n3;
    } else{
    n3 += n1;
    return somaMult(n1,n2-1, n3);
    }
}

int main(){

    int n1, n2, n3=0;
    cin >> n1 >> n2;
    cout << somaMult(n1, n2, n3) << endl;

    return 0;
}