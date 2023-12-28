#include <bits/stdc++.h>

using namespace std;

// Divisão

// Faça um programa que leia dois números reais AA e BB digitados pelo teclado e imprima a divisão de AA por BB.
// Entrada

// A entrada consiste de dois números reais AA e BB, um em cada linha.
// Saída

// A saída do seu programa deve ser um número real SS, representando a divisão de AA por BB com precisão de 2 casas decimais.

int main()
{
    cout.precision(2);
    double long a, b;
    cin >> a >> b;
    cout << fixed << a / b << endl;
}