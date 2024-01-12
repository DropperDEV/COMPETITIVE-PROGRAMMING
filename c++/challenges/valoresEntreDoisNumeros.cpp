#include <bits/stdc++.h>

using namespace std;

// Valores Entre Dois Números

// Faça um programa para ler dois valores inteiros AA e BB, e imprima todos os valores inteiros entre os números lidos em ordem crescente. Por exemplo, ao receber os valores 2 e 5, devem ser impressos os valores 2, 3, 4 e 5. Caso receba os valores 4 e -1, devem ser impressos os valores -1, 0, 1, 2, 3 e 4.
// Entrada

// A entrada consiste de duas linhas. Cada linha consiste de um inteiro.
// Saída

// A saída é composta de uma linha contendo todos os inteiros no intervalo fechado dos inteiros recebidos.
// Restrições

//     −100≤A,B≤100−100≤A,B≤100

int main()
{
    int n, m, maior = 0, menor = 0;
    cin >> n >> m;

    if (n > m)
    {
        maior = n;
        menor = m;
    }
    if (n < m){        
        menor = n;
        maior = m;
    }

    for (int i = menor; i <= maior; i++)
    {
        cout << i << ' ';
    }
    

    return 0;
}