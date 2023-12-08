#include <iostream>
#include <locale.h>

using namespace std;

// Objetivo do programa: Este programa avalia a magnitude de um terremoto inserida pelo usuário
// e fornece informações sobre sua periculosidade com base em faixas de magnitude pré-definidas.

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << "Estruturas de controle ANINHADAS!" << endl;
    cout << "Bem-vindo à central de alerta de terremotos. Insira abaixo a magnitude do tremor e lhe daremos mais informações quanto à sua periculosidade:" << endl;
    float magnitude;
    cin >> magnitude;
    if (magnitude <= 3.4){
        cout << "O efeito é imperceptível." << endl;
    } else if (magnitude >= 3.5 and magnitude <= 5.4){
        cout << "Pode, ou não, ser sentido, causando pequeníssimos danos." << endl;
        }
        else if (magnitude >= 5.5 and magnitude <= 6.0) {
        cout << "Ocasiona pequenos danos a construções." << endl;
        }
        else if (magnitude >= 6.1 and magnitude <= 6.9){
            cout << "Pode causar danos graves em regiões com muitas pessoas." << endl;
        }
        else if (magnitude >= 7 and magnitude <= 7.9){
            cout << "Tremor de grandes proporções, danos graves." << endl;
        }
        else {
            cout << "Destruição total no local atingido e atinge regiões ainda mais distantes ao epicentro, FUJA." << endl;
        }

    return 0;
}