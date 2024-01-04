#include <bits/stdc++.h>

using namespace std;

// Todos os Divisores

// Dado um número inteiro XX, encontre todos os divisores de XX.
// Entrada

// A entrada consiste de apenas uma linha contendo o número XX.
// Saída

// A saída do seu programa deve conter apenas uma linha com os divisores de XX separados por um espaço em branco. O divisores devem ser impressos em ordem crescente.

int main(){
    int x,i=1;
    cin >> x;
    while (i<=x)
    {
       if((x % i) == 0){
        cout << i << ' ';
       }
       i++;
    }
    
}