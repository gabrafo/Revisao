#include <iostream>
#include <fstream>

using namespace std;

/*
Este código cria um padrão de jogo de xadrez com dimensões determinadas pelo usuário, escrevendo-o em um arquivo chamado
"jogo.txt". Ele gera um padrão de linhas com caracteres '.' e '#' intercalados, criando uma espécie de tabuleiro. O padrão varia
dependendo se o número de dimensões fornecido é par ou ímpar.

*/

void linha(ofstream &arq, int &dimensoes)
{
    char preta = '.', branca = '#';
    int cont = 0;
    while (cont < dimensoes / 2)
    {
        arq << preta << branca;
        cont++;
    }
    if (dimensoes % 2 != 0)
    {
        arq << preta;
    }
    arq << endl;
}

void linha1(ofstream &arq, int &dimensoes)
{
    char preta = '.', branca = '#';
    int cont = 0;
    while (cont < dimensoes / 2)
    {
        arq << branca << preta;
        cont++;
    }
    if (dimensoes % 2 != 0)
    {
        arq << branca;
    }
    arq << endl;
}

int main()
{
    int dimensoes;

    cin >> dimensoes;

    ofstream arq;
    arq.open("jogo.txt");
    if (dimensoes<=0){
        cout << "ERRO!" << endl;
    } else if (dimensoes == 1){
        arq << '.';
    } else {
    if (dimensoes % 2 == 0)
    {
        for (int i = 0; i < dimensoes; i++){
            linha(arq, dimensoes);
        }
    }
    else if (dimensoes % 2 != 0)
    {   
        for (int i = 0; i < dimensoes/2; i++){
        linha(arq, dimensoes);
        linha1(arq, dimensoes);
        }
        linha(arq, dimensoes);
    }}
    arq.close();
    return 0;
}