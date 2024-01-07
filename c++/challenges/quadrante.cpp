#include <bits/stdc++.h>

using namespace std;

// Quadrante

// Faça um programa para ler dois inteiros XX e YY representando um ponto em um plano cartesiano. Imprima qual quadrante esse ponto de encontra. Caso o ponto esteja em algum eixo, imprima apenas a mensagem "eixos".

// Figura 1
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém o inteiro XX. A segunda linha contém o inteiro YY.
// Saída

// A saída consiste de uma linha contendo a mensagem indicando qual o quadrante que o ponto está.
// Restrições

//     −100≤X,Y≤100
//     −100≤X,Y≤100

int main(){
    int x,y;
    cin >> x >> y;
    if(y==0 or x==0){
        cout << "eixos";
    }

    if(x>0 and y>0){
        cout << "Q1";
    }

    if(x<0 and y>0){
        cout << "Q2";
    }

    if(x<0 and y<0){
        cout << "Q3";
    }

    if(x>0 and y<0){
        cout << "Q4";
    }

    return 0;
}