#include <iostream>
#include <fstream>
#include <iomanip>

// Objetivo do programa: Ler um arquivo chamado "entrada.txt" contendo informações sobre distância percorrida em quilômetros (km),
// velocidade média em km/h (kmh) e tempo em horas (h). O programa converte a distância de km para milhas náuticas (1.852 km = 1 milha náutica)
// e calcula a velocidade média em milhas náuticas por hora (knots) utilizando a fórmula (distância em milhas náuticas / tempo em horas).
// Os resultados são exibidos no console com precisão de duas casas decimais.

using namespace std;

int main(){

    // km, km/h. hora
    float km, kmh, h;

    ifstream arq;
    arq.open("entrada.txt", ios::in);
    while(arq >> km >> kmh >> h){
    cout << setprecision(2) << fixed << km/1.852 << " " << setprecision(2) << fixed << ((kmh*h)/1.852) << endl;
    }
    arq.close();
    return 0;
}
