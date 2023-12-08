#include <iostream>
using namespace std;

/*
Este programa gera uma sequência de Ricci de tamanho 'cont' iniciando com os dois primeiros números 'n1' e 'n2'.
A sequência de Ricci é gerada somando os dois últimos números para produzir o próximo número na sequência.
A função 'ricci' realiza a geração da sequência de Ricci e a imprime na tela.
*/

void ricci(int n1, int n2, int cont){
    if (cont <= 0){
        return;
    }
    // cont = 4
    int n3=n2+n1;
    n1 = n2;
    n2 = n3;
    cout << n3 << " ";
    ricci(n1, n2, cont-1);
}

int main(){
    int n1, n2, cont;
    cin >> n1 >> n2 >> cont; // cont = 6
    cout << n1 << " " << n2 << " ";
    ricci(n1, n2, cont-2);

    return 0;
}