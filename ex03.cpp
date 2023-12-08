#include <iostream>
#include <cmath>
using namespace std;

// Objetivo do programa: Com base em um ângulo fornecido pelo usuário (em graus),
// e dois números reais, este programa determina em qual quadrante do plano cartesiano
// o ângulo se encontra e realiza operações específicas com os números dependendo do quadrante.

int main(){
    int h;
    float x, y;

    cin >> h >> x >> y;

    h = h % 360;

    if (h >= 0 && h < 90) {
        cout << x + y << endl; // Primeiro quadrante
    } else if (h >= 90 && h < 180) {
        cout << x * y << endl; // Segundo quadrante
    } else if (h >= 180 && h < 270) {
        cout << x / y << endl; // Terceiro quadrante
    } else {
        cout << pow(x, y) << endl; // Quarto quadrante
    }

    return 0;
}