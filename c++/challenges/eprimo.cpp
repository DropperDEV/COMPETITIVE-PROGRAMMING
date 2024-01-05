#include <bits/stdc++.h>

using namespace std;

// É primo?

// Escreva um programa que testa se um número é primo.
// Entrada

// A única linha dos casos de teste contém um número NN.
// Saída

// Imprima 1 linha, caso o número seja primo escreva 'S', caso contrário escreva 'N'.
// Restrições

//     1≤N≤10121≤N≤1012

bool primo(long long n){
    if(n == 1) return false;

    for (int i = 2; i * i <= n; i++)
   {
    if(n%i == 0) return false;
   }
   return true;
}

int main(){
    long long n;
    cin >> n;
    if(primo(n)) {
        cout << 'S' << '\n';
    } else {
        cout << 'N' << '\n';
    }
   
    return 0;
}