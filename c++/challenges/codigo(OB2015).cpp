#include <bits/stdc++.h>

using namespace std;

// Código (OBI 2015)

// Gabriel inventou um código para representar números naturais, usando uma sequência de zeros e uns. Funciona assim, o número natural é representado pela quantidade de vezes que o padrão "100" aparece na sequência.

// Por exemplo, na sequência 11101001010011110, o padrão aparece duas vezes e na sequência 11101010111110111010101 ele não aparece nenhuma vez. Você deve ajudar Gabriel implementar um programa que, dada a sequência de zeros e uns, calcule quantas vezes o padrão "100" aparece nela.
// Entrada

// A primeira linha da entrada contém um inteiro NN, o tamanho da sequência. A segunda linha contém a sequência de NN zeros e uns, separados por espaço em branco.
// Saída

// Seu programa deve imprimir um inteiro, quantas vezes o padrão "100" aparece na sequência.
// Restrições

//     1≤N≤1041≤N≤104

int main()
{
    int n, qnt = 0;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
     cin >> m[i];
    }
     for (int i = 0; i < n - 2; i++)
     {
         if(m[i] == 1 and m[i+1] == 0 and m[i+2] == 0){
             qnt++;
         }
     }
    cout << qnt;

    return 0;
}