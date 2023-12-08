#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    
    // Objetivo do programa: Imprimir em um arquivo .txt o maior número inteiro e o dia da semana correspondente a esse número.

    ifstream arq1;
    arq1.open("jazida.txt");
    float domingo, segunda, terca, quarta, quinta, sexta, sabado;
        if(arq1){
            arq1 >> domingo >> segunda >> terca >> quarta >> quinta >> sexta >> sabado;
            float melhor = domingo;
            string melhorDia = "domingo";
        if (sabado > melhor){
            melhor = sabado;
            melhorDia = "sabado";
        } else if (sexta > melhor){
            melhor = sexta;
            melhorDia = "sexta-feira";
        } else if (segunda > melhor){
            melhorDia = "segunda-feira";
            melhor = segunda;
        } else if (terca>melhor){
            melhorDia = "terca-feira";
            melhor = terca;
        } else if (quarta > melhor){
            melhorDia= "quarta-feira";
            melhor = quarta;
        } else if (quinta > melhor){
            melhorDia= "quinta-feira";
            melhor = quinta;
        }
        cout << melhorDia << endl;
        cout << fixed << setprecision(1) << melhor << endl;
        }
    arq1.close();
    return 0;
}