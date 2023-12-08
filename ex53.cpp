#include <iostream>
using namespace std;

// Objetivo do programa: Calcular o valor da função de Ackermann-Péter para dois números inteiros não negativos (m, n).
// A função é definida por casos recursivos e pode demandar muitos recursos de processamento para valores grandes.
// Evite valores altos, pois podem causar lentidão no processamento.

unsigned int ackermannPeter(unsigned int m, unsigned int n){
    if (m == 0){
        return n+1;
    } else if (m>0 and n==0){
        return ackermannPeter(m-1,1);
    } else {
        return ackermannPeter(m-1,ackermannPeter(m, n-1));
    }
}

int main(){
    unsigned int m, n;
    cin >> m >> n;
    cout << ackermannPeter(m, n) << endl;

    return 0;
}