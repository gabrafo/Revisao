#include <iostream>
#include <fstream>
using namespace std;

// Calcular vendas totais por produto, loja e o maior valor vendido no bimestre a partir de dados de vendas de dois meses consecutivos.
// Receber informações de duas matrizes 5x3 de vendas de produtos em 3 lojas e somar os valores para obter o bimestre.
// Escrever as vendas de cada produto em cada loja no bimestre, identificar a maior venda, somar vendas por loja e por produto, e armazenar os resultados em um arquivo.


// PRODUTO = i (linhas), LOJA = j (colunas)
// bimestre *CHECKED*
// ver qual(is) elemento(s) é/são maior(es) *CHECKED*
// somar colunas *CHECKED*
// somar linhas *CHECKED*

int main(){
    ifstream arq;
    arq.open("vendas.txt");

    int matrizM1[5][3], matrizM2[5][3], matrizBi[5][3];

    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            arq >> matrizM1[i][j];
        }
    }
    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            arq >> matrizM2[i][j];
        }
    }

    arq.close();

    ofstream arq1;
    arq1.open("saida.txt");

    int maior = matrizBi[0][0];

    for(int i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            matrizBi[i][j] = matrizM1[i][j]+matrizM2[i][j];
            arq1 << matrizBi[i][j] << "\t";
            if(matrizBi[i][j]>maior){
                maior = matrizBi[i][j];
            }
        }
        arq1 << endl;
    }
    arq1 << endl;
    arq1 << maior << endl;

    int lojas, produtos;
    
    for(int j = 0; j<3; j++){
        lojas = matrizBi[0][j] + matrizBi[1][j] + matrizBi[2][j] + matrizBi[3][j] + matrizBi[4][j];
        arq1 << lojas << " ";
    }
    arq1 << endl;
    for(int i = 0; i<5; i++){
        produtos = matrizBi[i][0] + matrizBi[i][1] + matrizBi[i][2];
        arq1 << produtos << " ";
    }
    arq1 << endl;

    arq1.close();

    return 0;
}