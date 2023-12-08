#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*
Objetivo do Programa:
Este programa lê dados de um arquivo "entrada.txt", contendo valores de distância em quilômetros, velocidade em km/h e tempo em
horas. Em seguida, converte a velocidade de km/h para milhas náuticas e calcula a distância percorrida em milhas náuticas com
base nos valores fornecidos, exibindo esses resultados na tela.
*/

int main(){
    float km, kmh, h;

    ifstream arq;
    arq.open("entrada.txt");
    float mh;
    while (arq >> km >> kmh >> h){
        mh = kmh/1.852;
        float distp = km/1.852 + mh*h;
        cout << fixed << setprecision(2) << km/1.852 << " " << distp << endl;
    }
    arq.close();
    return 0;
}
