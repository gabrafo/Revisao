#include <iostream>

using namespace std;

/*
Esse código simula uma batalha entre um jogador e 10 inimigos, onde o jogador ataca todos os inimigos ao mesmo tempo até que todos
os inimigos sejam derrotados (ou seja, tenham seus pontos de vida reduzidos a zero). Ele conta quantos inimigos foram derrotados
durante a batalha e exibe esse número.
*/

int main()
{
    int hp[10];
    int cont = 0;
    bool derrotouInimigo = false;

    for (int i=0;10>i;i++){
        cin >> hp[i];
    }
    do {
        derrotouInimigo = false;
    for (int i=0;10>i;i++){
        hp[i]--;
        if(hp[i] == 0){
        derrotouInimigo = true;
        cont++;
        }
    }
    } while(derrotouInimigo);
    cout << cont << endl;
    return 0;
}