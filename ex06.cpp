#include <iostream>
#include <cmath>
using namespace std;

// Objetivo do programa: Receber as coordenadas de três locais e suas condições ("cheio" ou "livre"),
// calcular a distância entre esses locais e determinar se é mais rápido viajar de bicicleta ou de carro
// com base na velocidade e na disponibilidade de cada opção para cada trecho do percurso.

int main (){
    int x1, x2, x3, y1, y2, y3;
    float distancia1, distancia2, distancia3;
    string Local1, Local2, Local3;
    cin >> x1 >> y1 >> Local1 >> x2 >> y2 >> Local2 >> x3 >> y3 >> Local3;

    distancia1 = sqrt((pow((0 - x1),2) + pow((0 - y1),2)));
    distancia2 = sqrt((pow((x1 - x2),2) + pow((y1 - y2),2)));
    distancia3 = sqrt((pow((x2 - x3),2) + pow((y2 - y3),2)));

    float velBicicleta, velCarro, velBicicleta1, velCarro1, velBicicleta2, velCarro2;
    
    if (Local1 == "cheio"){
        velBicicleta = 18;
        velCarro = 24;
        velBicicleta *= distancia1;
        velCarro *= distancia1;
    } else if (Local1 == "livre"){
        velBicicleta = 15;
        velCarro = 5;
        velBicicleta *= distancia1;
        velCarro *= distancia1;
    }
    
    if (Local2 == "cheio"){
        velBicicleta1 = 18;
        velCarro1 = 24;
        velBicicleta1 *= distancia2;
        velCarro1 *= distancia2;
    } else if (Local2 == "livre"){
        velBicicleta1 = 15;
        velCarro1 = 5;
        velBicicleta1 *= distancia2;
        velCarro1 *= distancia2;
    }

    if (Local3 == "cheio"){
        velBicicleta2 = 18;
        velCarro2 = 24;
        velBicicleta2 *= distancia3;
        velCarro2 *= distancia3;
    } else if (Local3 == "livre"){
        velBicicleta2 = 15;
        velCarro2 = 5;
        velBicicleta2 *= distancia3;
        velCarro2 *= distancia3;
    }

    if ((Local1 == "cheio" and Local2 == "cheio" and Local3 == "cheio") or (Local1 == "cheio" and Local2 == "cheio" and Local3 == "livre") or (Local1 == "cheio" and Local2 == "livre" and Local3 == "cheio") or (Local1 == "livre" and Local2 == "cheio" and Local3 == "cheio")) {
        cout << "Bicicleta " <<ceil(velBicicleta1+velBicicleta2+velBicicleta) << endl;
    }
    if ((Local1 == "livre" and Local2 == "livre" and Local3 == "livre") or (Local1 == "cheio" and Local2 == "livre" and Local3 == "livre") or (Local1 == "livre" and Local2 == "cheio" and Local3 == "livre") or (Local1 == "livre" and Local2 == "livre" and Local3 == "cheio")){
        cout << "Carro " << ceil(velCarro1+velCarro2+velCarro) << endl;
    }
    return 0;
}