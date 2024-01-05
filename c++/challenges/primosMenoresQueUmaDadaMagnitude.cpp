#include <bits/stdc++.h>

using namespace std;

// Primos Menores Que Uma Dada Magnitude

// Bernhard Riemann gosta de estudar números primos, sua última ideia foi pesquisar sobre a quantidade de primos menores que um dado número. Ele é um matemático brilhante e provavelmente vai conseguir algum resultado profundo, porém primeiro ele precisa dos dados relevantes, e por isso pediu a sua ajuda.
// Entrada

// A única linha dos casos de teste contém um número NN.
// Saída

// Imprima em uma única linha todos os números entre 1 e NN que são primos.
// Restrições

//     0≤N≤1050≤N≤105

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
    for (int i = 1; i <= n; i++)
    {
    if(primo(i)) {
        cout << i << ' ';
    }
    }
    cout << '\n';
   
    return 0;
}

//O(n * sqrt(n))
// O(10^7 * sqrt(10^7) = 10^11)