#include <bits/stdc++.h>

using namespace std;

// Subtração

// Faça um programa para ler dois valores inteiros AA e BB e imprima o resultado da expressão (A−B)(A−B).
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém o inteiro AA e a segunda linha contém o inteiro BB.
// Saída

// A saída consiste de uma linha contendo o resultado da expressão (A−B)(A−B).
// Restrições

//     Os inteiros fornecidos não terem valor absoluto maior que 1000.

int main(){
    pair<int,int> nums;
    cin >> nums.first >> nums.second;
    cout << nums.first - nums.second;
};