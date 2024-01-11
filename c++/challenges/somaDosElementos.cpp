#include <bits/stdc++.h>

using namespace std;

// Soma dos Elementos

// Nesse problema você receberá um conjunto de valores e sua tarefa é imprimir a soma desses valores.
// Entrada

// A entrada consiste em duas linhas. A primeira linha possui apenas um valor NN, representando a quantidade de valores que você deve ler. A segunda linha possui NN números inteiros separados por um espaço em branco.
// Saída

// Você deve imprimir a soma dos NN números inteiros lidos na entrada.
// Restrições

//     1≤N≤1001≤N≤100


int main(){
  int n,soma = 0, a;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a;
    soma += a;
  }
  cout << soma;
  
    return 0;
}