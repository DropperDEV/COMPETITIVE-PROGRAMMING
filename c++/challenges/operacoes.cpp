#include <bits/stdc++.h>

using namespace std;

// Operações

// Você deve escrever um programa que será capaz de resolver operações de multiplicação e divisão. Primeiro será informado que operação seu programa deve calcular, depois será informado dois números, seu programa deve então imprimir a resposta apropriada.
// Entrada

// A entrada consiste de duas linhas, a primeira linha apresentará a letra 'M' caso você deva calcular a multiplicação entre os números e a letra 'D' caso a operação seja de divisão. A segunda linha conterá dois números reais.
// Saída

// A saída do seu programa deve conter apenas uma linha, informando a resposta apropriada para a operação realizada com uma precisão de 2 casas decimais.


int main()
{
    double a, b;
    char op;
    cin >> op;
    cin >> a >> b;
    double d = a / b;
    double m = a * b;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (op == 'M')
    {
        cout << m;
    }
    else if (op == 'D')
    {
        cout << d;
    }
    else
    {
        cout << "Opção invalida";
    }
    return 0;
}