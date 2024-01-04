#include <bits/stdc++.h>

using namespace std;

// Positivo, Negativo ou Nulo

// Faça um programa para ler um inteiro xx. Imprima a mensagem "positivo" se o valor for positivo. Imprima a mensagem "negativo" caso o valor seja negativo. Imprima a mensagem "nulo" se o valor for zero.
// Entrada

// A entrada consiste de uma linha contendo um inteiro.
// Saída

// A saída consiste de uma linha contendo uma mensagem.
// Restrições

//     o valor fornecido não terá valor absoluto maior que 1000.

int main(){
    int n;
    cin >> n;
    if(n > 0){
        cout << "positivo" << '\n';
    } else if(n < 0){
        cout << "negativo" << '\n';  
    } else{
        cout << "nulo" << '\n';  
    }

    return 0;
}