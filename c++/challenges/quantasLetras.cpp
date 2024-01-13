#include <bits/stdc++.h>

using namespace std;

// Quantas Letras?

// Faça um programa para ler uma string SS (sem espaços) e uma letra CC. Seu programa deve imprimir a quantidade de vezes que a letra CC aparece em SS.
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém uma string SS. A segunda linha contém uma letra CC.
// Saída

// A saída consiste de uma única linha contendo um inteiro correspondente a quantidade de vezes que a letra CC aparece na string SS
// Restrições

//     1≤∣S∣≤501≤∣S∣≤50
//     A string contém apenas letras minúsculas do alfabeto

int charToInt(char s){
    return s - '0';
}

int main(){
    string palavra;
    char C;

    cin >> palavra >> C;

    int letra = charToInt(C), incremento = 0;

    for (int i = 0; i < palavra.size(); i++)
    {
        if(charToInt(palavra[i]) == letra) incremento++;
    }

    cout << incremento;
    
    return 0;
}