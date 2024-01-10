#include <bits/stdc++.h>

using namespace std;

// Fatorial

// Faça um programa para ler um inteiro NN e imprima o valor de N!N!. N!N! significa fatorial de NN.
// Entrada

// A entrada consiste de uma linha contendo o valor de NN.
// Saída

// A saída consiste de uma linha contendo o valor de N!N!.
// Restrições

//     0≤N≤120≤N≤12


int main(){
    int n,f = 1;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    
    cout << f;
    return 0;};