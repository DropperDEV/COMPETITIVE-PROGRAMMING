#include <bits/stdc++.h>

using namespace std;

// Garçom

// Parte do treinamento de um novo garçom é carregar uma grande bandeja com várias latas de bebidas e copos e entregá-las todas numa mesa do restaurante. Durante o treinamento é comum que os garçons deixem cair as bandejas, quebrando todos os copos.

// A SBC -- Sociedade Brasileira de Copos -- analisou estatísticas do treinamento de diversos garçons e descobriu que os garçons em treinamento deixam cair apenas bandejas que têm mais latas de bebidas que copos. Por exemplo, se uma bandeja tiver 10 latas e 4 copos, certamente o garçom em treinamento a deixará cair, quebrando os 4 copos. Já se a bandeja tiver 5 latas e 6 copos, ele conseguirá entregá-la sem deixar cair.

// Escreva um programa que, dado o número de latas e copos em cada bandeja que o garçom tentou entregar, imprime o total de copos que ele quebrou.
// Entrada

// A primeira linha da entrada contém um inteiro NN representando o número de bandejas que o garçom tentou entregar. As NN linhas seguintes representam as NN bandejas. Cada linha contém dois inteiros LL e CC, indicando o número de latas e o número de copos naquela bandeja, respectivamente.
// Saída

// Seu programa deve imprimir uma única linha, contendo um único inteiro, indicando o número total de copos que o garçom quebrou.
// Restrições

//     1≤N≤1001≤N≤100
//     0≤L,C≤1000≤L,C≤100

int main(){
    int n,d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c,l;
        cin >> l >> c;
        if(l > c){
            d += c;
        }
    }
    
    cout << d;
    return 0;
}