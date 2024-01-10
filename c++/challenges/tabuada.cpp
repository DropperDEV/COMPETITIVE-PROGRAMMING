#include <bits/stdc++.h>

using namespace std;

// Tabuada

// Bino está aprendendo a multiplicar números e gostaria da sua ajudar para apresentar a tabuada de um determinado valor inteiro XX.
// Entrada

// A entrada consiste em uma única linha contendo o valor inteiro XX.
// Saída

// A saída consiste de 10 linhas. A i-éssima linha constem a mensagem "x * i = valor", onde x é o valor de XX, ii representa a o identificar da linha e o valorvalor é o valor da múltiplicação de X∗iX∗i
// Restrições

//     0≤X≤10000≤X≤1000

int main(){
    int x;
    cin >> x;
    for (int i = 1; i < 11; i++)
    {
        cout << x << " * " << i << " = " << x*i << '\n';
    }
    

    return 0;
};