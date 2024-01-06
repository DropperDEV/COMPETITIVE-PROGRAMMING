#include <bits/stdc++.h>

using namespace std;

// Fibonacci

// Uma famosa sequência matemática é a sequência de Fibonacci, está sequência é definida por:

// fib(0)=fib(1)=1
// fib(0)=fib(1)=1

// fib(n)=fib(n−1)+fib(n−2)
// fib(n)=fib(n−1)+fib(n−2)

// Escreva um programa que dado NN retorna o n-ésimo número de Fibonacci.
// Entrada

// A entrada contem um único número NN.
// Saída

// O valor do n-ésimo número de Fibonacci.
// Restrições

//     0≤N≤300≤N≤30

int fib(int n){
    if(n == 0 or n == 1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int n;
    cin >> n;

    cout << fib(n) << '\n';
    return 0;
}