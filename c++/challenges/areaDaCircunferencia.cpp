#include <bits/stdc++.h>

using namespace std;

// Área da Circunferência

// Bino quer calcular a área de uma circunferência e pediu sua ajuda para isso.

// Faça um programa para ler um valor real RR representando o raio da circunferência que Bino que calcular a área. Imprima a área da circunferência utilizando como pi o valor 3.1416.
// Entrada

// A entrada consiste de uma linha contendo o valor do raio da circunferência.
// Saída

// A saída consiste de uma única linha contendo a área da circunferência com duas casas de precisão.
// Restrições

//     Os valores fornecidos não serão negativos nem maior que 10000

int main(){
    cout.precision(2);
    cout.setf(ios::fixed);
    int r;
    double pi = 3.1416;
    cin >> r;

    cout << pi*(r*r) << '\n';
    return 0;
}