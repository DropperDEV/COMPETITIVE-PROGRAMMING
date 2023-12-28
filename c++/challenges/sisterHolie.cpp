#include <bits/stdc++.h>

using namespace std;

// Sister Holie

// A irmã Holie ( Sister Holie ) é a coordenadora de uma das mais famosas igrejas do mundo, durante a preparação da igreja para uma das celebrações mais esperadas do ano ela nota que algumas lâmpadas não acendem. Por sorte da irmã Holie tem um amigo de confiança para esses momentos ( você ), que irá verificar todas as tomadas da igreja e descobrir quantas delas não estão direcionando energia para acender as lâmpadas.
// Sua tarefa é criar um programa que verifique uma quantidade NN de lâmpadas e diga en quantas delas não há passagem de energia.
// ( Considere que 1 signifique há passagem de energia e 0 que não há passagem de energia )
// Entrada

// O programa recebe um valor NN que será a quantidade de tomadas da igreja. Em seguida, NN números correspondentes a passagem de corrente elétrica nas tomadas.
// Saída

// A saída do programa deve ser um número inteiro correspondente a quantidade de tomadas onde não há a passagem de corrente elétrica.
// Restrições

//     0≤N≤1000≤N≤100

int main()
{
    int ql;
    int f;
    int r = 0;
    cin >> ql;
    for (int i = 0; i < ql; i++)
    {
        cin >> f;
        if (f == 0)
        {
            r++;
        }
    }
    cout << r;
}