#include <iostream>
using namespace std;

/*
Este programa realiza uma contagem crescente a partir de zero até um número específico fornecido pelo usuário.
Ele exibirá cada número da contagem, separados por um espaço em branco, e então imprime o número final da contagem.
*/

unsigned int contagemCresc(unsigned int n, unsigned int cont){
    if (cont<n){
    cout << cont << " ";
    return contagemCresc(n, cont+1);
    } else {
        return n;
    }
}

int main(){
    unsigned int n, cont = 0;
    cin >> n;
    cout << contagemCresc(n, cont) << endl;
    return 0;
}