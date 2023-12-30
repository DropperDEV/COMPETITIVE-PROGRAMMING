#include <bits/stdc++.h>

using namespace std;

// Soma das Colunas de Matriz 3x3

// Faça um programa para ler os elementos de uma matriz 3x3 e imprimir a soma de cada coluna da matriz.
// Entrada

// A entrada consiste de 9 linhas. Cada linha contém um inteiro. Os 9 inteiros representam uma matriz 3x3 onde os três primeiros inteiros representam os valores da primeira linha.
// Saída

// A saída consiste de três linhas. Cada linha contém uma mensagem indicando qual a soma dos elementos de determinada coluna.

int main()
{
    int n = 3;
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        int soma = 0;
        for (int i = 0; i < n; i++)
        {
            soma += matriz[i][j];
        }
        cout << "Coluna " << j << ": " << soma << endl;
    }

    return 0;
}