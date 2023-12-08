#include <iostream>
using namespace std;

// Objetivo do programa: Calcular o valor final e o valor das parcelas de uma compra, considerando um desconto de 10%
// para pagamento à vista ('V' ou 'v') e condições de parcelamento para 'P' ou 'p' em 3, 6 ou 12 vezes
// com acréscimos de 5% e 10% para 6 e 12 parcelas, respectivamente.

int main (){

    float valor;
    char compra;
    int parcelas;

    cin >> valor >> compra;

    if (compra == 'V' or compra == 'v'){
        cout << valor - (valor * 0.10) << endl;
    }

    if (compra == 'P' or compra == 'p'){ // tem que ser aspas simples por ser char
    cin >> parcelas;
    if(parcelas == 3){
        cout << (valor) << endl;
        cout << (valor)/parcelas << endl;
    } else if(parcelas == 6){
        cout << (1.05*valor) << endl;
        cout << (1.05*valor)/parcelas << endl;
    } else if(parcelas == 12){
        cout << (1.1*valor) << endl;
        cout << (1.1*valor)/parcelas << endl;
    }
    }
    return 0;
}