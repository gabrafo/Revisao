#include <iostream>
using namespace std;

/*
Este programa recebe a idade e o peso como entrada e, com base nessas informações,
atribui uma pontuação de acordo com faixas específicas de idade e peso. Essa pontuação é exibida na saída padrão (console).
*/

int main(){
    int idade;
    float peso;

    cin >> idade >> peso;

    if (idade < 20 and peso <=60){
        cout << 9 << endl;
    } else if (idade < 20 and peso > 60 and peso <= 90){
        cout << 8 << endl;
    } else if (idade < 20 and peso >90){
        cout << 7 << endl;
    } else if (idade >= 20 and idade <= 50 and peso <=60){
        cout << 6 << endl;
    } else if (idade >= 20 and idade <= 50 and peso >60 and peso <=90){
        cout << 5 << endl;
    } else if (idade >= 20 and idade <= 50 and peso >90){
        cout << 4 << endl;
    } else if (idade > 50 and peso <=60){
        cout << 3 << endl;
    } else if (idade > 50 and peso >60 and peso <=90){
        cout << 2 << endl;
    } else if (idade > 50 and peso >90){
        cout << 1 << endl;
    }
    return 0;
}