#include <iostream>

using namespace std;

/*
Este programa compara respostas de alunos com um gabarito, avaliando quantas respostas estão corretas
em relação a duas versões diferentes do gabarito.
- Solicita as respostas dos alunos (gabarito do aluno 1 e gabarito do aluno 2).
- Compara cada resposta com as respostas corretas (gabarito original) e conta quantas respostas coincidem.
- Imprime o número de respostas corretas de cada aluno.
- Avalia se a quantidade de respostas corretas é suficiente para ser aprovado ou reprovado.
*/

int main()
{
    char gab[10], gab1[10], gab2[10];
    int cont1=0, cont2=0;

    for (int i=0;10>i;i++){
        cin >> gab[i];
    }

    for (int i=0;10>i;i++){
        cin >> gab1[i];
        if (gab[i] == gab1[i]){
            cont1++;
        }
    }

    for (int i=0;10>i;i++){
        cin >> gab2[i];
        if (gab[i] == gab2[i]){
            cont2++;
        }
    }

    cout << cont1 << endl;
    if (cont1>=6){
        cout << "APROVADO" << endl;
    } else {
        cout << "REPROVADO" << endl;
    }

    cout << cont2 << endl;
    if (cont2>=6){
        cout << "APROVADO" << endl;
    } else {
        cout << "REPROVADO" << endl;
    }

    return 0;
}