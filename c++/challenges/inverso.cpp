#include <bits/stdc++.h>

using namespace std;
// Inverso

// Faça um programa para ler 10 valores inteiros como entrada e imprima na ordem inversa da que foram lidos.
// Entrada

// A entrada consiste de 10 linhas, cada linha contém um valor inteiro.
// Saída

// A saída consiste de dez linha contendo, cada linha com um os 10 valores lidos, porém, na ordem contrária da que foram lidos.

int main(){
    int n = 10;
    vector<int> numeros(n);
    vector<int> numeros2;
    for (int i = 0; i < n; i++)
    {
        cin >> numeros[i];
    }
    
    for (int i = 9; i >= 0; i--)
    {
        numeros2.push_back(numeros[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << numeros2[i] << ' ';
    }
    

    return 0;
}