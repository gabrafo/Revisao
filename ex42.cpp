#include <iostream>
using namespace std;

/*
Este programa permite que o usuário insira dois números e escolha entre quatro operações (média, subtração, multiplicação ou
divisão) para serem realizadas entre esses números. O resultado da operação selecionada é exibido na saída padrão (console).
*/

double media (double a, double b){
    double res = (a+b)/2.0;

    return res;
}

double sub (double a, double b){
    double sub, maior = a;
    if (maior > b){
        sub = maior - b;
    }
    else if (b > maior){
        sub = b - maior;
    }

    return sub;
}

double mult (double a, double b){
    double res = a*b;

    return res;
}

double div (double a, double b){
    double res = double(a)/b;

    return res;
}

int main(){
    double a, b;
    int x;
    cin >> a >> b;
    cin >> x;
    if (x == 1){
        cout << media(a, b) << endl;
    }
    else if (x==2){
        cout << sub(a,b) << endl;
    }
    else if (x==3){
        cout << mult(a,b) << endl;
    }
    else if (x==4){
        cout << div(a,b) << endl;
    }
    else {
        cout << "ERRO" << endl;
    }

    return 0;
}