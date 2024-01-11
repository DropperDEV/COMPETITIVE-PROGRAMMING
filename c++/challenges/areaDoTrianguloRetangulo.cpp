#include <bits/stdc++.h>

using namespace std;

// Área do Triângulo Retângulo

// Faça um programa para ler dois valores inteiros AA e BB e imprima a área inteira de um triângulo retângulo que tenha bases AA e BB.
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém o inteiro AA e a segunda linha contém o inteiro BB.
// Saída

// A saída consiste de uma linha contendo a área inteira de um triângulo retângulo que tenha bases AA e BB.
// Restrições

//     Os inteiros fornecidos não terem valor maior que 1000 ou menor que 1

int main(){
    int a,b;
    cin >> a >> b;
    cout << a*b/2;

    return 0;
}