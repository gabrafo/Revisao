#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    string classe;
    int dias;
    float km;

    // Objetivo do programa: Com base na classe de carro escolhida ("ECONOMICO", "INTERMEDIARIO", "PRIME" ou "ESPECIAIS"),
    // dias de aluguel e quilometragem percorrida, o programa calcula e exibe o custo total do aluguel
    // e lista os carros disponíveis para cada classe de carro.


    cin >> classe >> dias >> km;

    if (classe == "ECONOMICO") {
        cout << fixed << setprecision(2);
        cout << "R$ " << (88*dias) + (1.15*km) << endl;
        cout << "Carros a disposição:  Fiat Uno 1.0; Fiat Mobi 1.0; Renault Kwid 1.0; VW Gol 1.0; Ford Ka 1.0; Renault Sandero 1.0; Onix Joy 1.0" << endl;
    } else if (classe == "INTERMEDIARIO") {
        cout << fixed << setprecision(2);
        cout << "R$ " << (197*dias) + (1.56*km) << endl;
        cout << "Carros a disposição:  HB20 1.6; VW Gol 1.6; Renault Sandero 1.0; Fiat Cronos 1.3; Onix 1.0 Turbo; Nissan Versa FAST" << endl;
    } else if (classe == "PRIME") {
        cout << fixed << setprecision(2);
        cout << "R$ " << (265*dias) + (2.89*km) << endl;
        cout << "Carros a disposição:  Ford Ecoesport 1.5; Renault Duster 1.6; Nissan Kicks 1.6; VW Nivus 1.6; Fiat Pulse 1.6; Chery Tiggo 3X Turbo" << endl;
    } else if (classe == "ESPECIAIS") {
        cout << fixed << setprecision(2);
        cout << "R$ " << (335*dias) + (3.40*km) << endl;
        cout << "Carros a disposição: Jeep Compass 4x4 Diesel; Mitsubishi Pajero 2.4 Diesel; Mercedes C180; Toyota Corola Cross; VW Taos Highline; Mitsubishi Eclipse Cross" << endl;
    }

    return 0;
}