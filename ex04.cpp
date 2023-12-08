#include <iostream>
#include <iomanip>
using namespace std;

// Objetivo do programa: Receber quatro números reais e identificar o menor entre eles, 
// imprimindo a soma dos outros três números, desconsiderando o menor valor, 
// caso haja mais de um número com o mesmo valor mínimo.

int main(){

    float n1, n2, n3, n4;
    float menor, menor2, menor3;

    cin >> n1 >> n2 >> n3 >> n4;

    if (n1 > n2 and n1 > n3 and n1 > n4){
        cout << setprecision(2) << n2 + n3 + n4 << endl;
    } else if (n2 > n1 and n2 > n4 and n2 > n3){
        cout << n1 + n3 + n4 << endl;
    } else if (n3 > n1 and n3 > n4 and n3 > n2){
        cout << n1 + n2 + n4 << endl;
    } else if (n4 > n1 and n4 > n2 and n4 > n3){
        cout << n2 + n3 + n1 << endl;
    }   else if (n1 == n2 and (n3 > n2 or n4 > n2)){
        if(n4 > n3){
        menor = n1;
        menor2 = n2;
        menor3 = n3;
        cout << menor << menor2 << menor3 << endl;
        } else if (n3 > n4){
        menor = n1;
        menor2 = n2;
        menor3 = n4;
        cout << menor << menor2 << menor3 << endl;
        } else if(n4 == n3){
        menor = n1;
        menor2 = n2;
        menor3 = n3;
        cout << menor << menor2 << menor3 << endl;
        } else if (n3 == n4 and (n1 > n3 or n2 > n3)){
        if(n1 > n2){
        menor = n2;
        menor2 = n3;
        menor3 = n4;
        cout << menor << menor2 << menor3 << endl;
        } else if (n2 > n1){
        menor = n1;
        menor2 = n3;
        menor3 = n4;
        cout << menor << menor2 << menor3 << endl;
        } else if(n1 == n2){
        menor = n2;
        menor2 = n3;
        menor3 = n4;
        cout << menor << menor2 << menor3 << endl;
        }
        }
    }
    return 0;
}