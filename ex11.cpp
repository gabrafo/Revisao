#include <iostream>
#include <fstream>
using namespace std;

// Objetivo do programa: Ler informações de um arquivo chamado "investigacao.txt"
// contendo suspeitas e respostas de uma investigação. Com base nas respostas "sim" e na contagem delas,
// o programa identifica o número de suspeitas a serem consideradas e as imprime na saída padrão.

int main(){
    string susp1, susp2, susp3;
    string resp1, resp2, resp3, resp4, resp5;
    int score = 0;

    /* 
    2 questoes = susp1
    3 ou 4 questoes = susp2
    5 questoes = susp3
    else = todos os susps
    */

    ifstream arq;
    arq.open("investigacao.txt");
    if (arq){
        arq >> susp1;
        arq >> susp2;
        arq >> susp3;

        arq >> resp1;
        arq >> resp2;
        arq >> resp3;
        arq >> resp4;
        arq >> resp5;

        if (resp1 == "sim"){
        score++;
        }

        if (resp2 == "sim"){
        score++;
        }

        if (resp3 == "sim"){
        score++;
        }

        if (resp4 == "sim"){
        score++;
        }

        if (resp5 == "sim"){
        score++;
        }

        if(score==1 or score == 0){
            cout << susp1 << " " << susp2 << " " << susp3 << endl;;
        } else if (score == 3 or score == 4){
            cout << susp2 << endl;
        } else if (score == 5){
            cout << susp3 << endl;
        }
    }
    arq.close();
    return 0;
}