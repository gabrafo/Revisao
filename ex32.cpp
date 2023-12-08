#include <iostream>

using namespace std;

/*
Este programa simula uma lista de disponibilidade de 8 recursos. Inicialmente, todos os recursos são marcados como disponíveis.
Depois, ele solicita a entrada do nome de um recurso e um número que representa a posição na lista.

Se o nome for "fim", o programa imprimirá a lista atualizada com os recursos disponíveis e, em seguida, terminará a execução.

Caso contrário, se a posição especificada estiver disponível, o recurso será marcado com o nome fornecido.
Se a posição não estiver disponível (já marcada com um nome diferente de "disponivel" ou "fim"), será contabilizado como ocupado.
Finalmente, a função retorna o número de recursos ocupados que não foram marcados como "fim".
*/

int taDisponivel(string v[]){
    int i = 0;
    string nome;
    int cont = 0;
    while (i <= 7 and i > -1){
        cin >> nome;
        cin >> i;
        if (nome=="fim"){
        for (int i = 0; i<=7; i++){
        cout << v[i] << endl;
        }
        }
        if (v[i] == "disponivel"){
        v[i] = nome;
        } else if(v[i] != "disponivel" and v[i] != "fim"){
            cont ++;
        }
    }
    return cont;
}

int main(){

    string v[8];

    for (int i = 0; i<=7; i++){
        v[i] = "disponivel";
    }

    cout << taDisponivel(v) << endl;

    return 0;
}