#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Objetivo do programa: Receber dois valores (x e y), calcular a área (x * y) e a potência (18 * área)
// e salvar esses resultados em um arquivo chamado "potencia.txt", formatando a saída com uma casa decimal para a área e a potência.

int main(){
    float x, y;
    cin >> x >> y;

    ofstream arq;
    arq.open("potencia.txt");
    arq << fixed << setprecision(1) << x*y << "m2" << endl;
    arq << fixed << setprecision(1) << 18*(x*y) << "W" << endl;
    arq.close();

    return 0;
}
