#include <iostream>
using namespace std;

// Este programa recebe um ano como entrada e verifica se esse ano é bissexto ou não. Se o ano for bissexto, o programa imprime "1", caso contrário, imprime "0".

int main(){
    int ano;
    cin >> ano;
    if (ano%400==0 or (ano%4==0 and ano%100!=0)){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}