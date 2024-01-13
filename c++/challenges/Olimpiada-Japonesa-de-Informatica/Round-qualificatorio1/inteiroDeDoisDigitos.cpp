#include <bits/stdc++.h>

using namespace std;

// Inteiro de dois dígitos

// Dados dois números AA e BB.

// Imprima um número inteiro positivo de dois dígitos cuja casa das dezenas seja AA e cuja casa das unidades seja BB.
// Entrada

// A entrada é dada no seguinte formato.
// AA
// BB
// Saída

// Imprima um número inteiro positivo de 22 dígitos cujo dígito das dezenas é AA e o dígito das unidades é BB.
// Restrições

//     AA é 1, 2, 3, 4, 5, 6, 7, 81, 2, 3, 4, 5, 6, 7, 8 ou 99.
//     BB é 0, 1, 2, 3, 4, 5, 6, 7, 80, 1, 2, 3, 4, 5, 6, 7, 8 ou 99.

// Explicação do exemplo de entrada/saída 1:

// O inteiro positivo com 22 na casa das dezenas e 22 na casa das unidades é 2222, portanto, 2222 é a saída.
// Explicação do exemplo de Entrada/saída 2:

// O número inteiro positivo de dois dígitos com o dígito das dezenas sendo 11 e o dígito das unidades sendo 00 é 1010, portanto, 1010 é a saída.

int main(){
    char a,b;
    cin >> a >> b;
    cout << a << b;

    return 0;
}