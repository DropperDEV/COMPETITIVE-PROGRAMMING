#include <bits/stdc++.h>

using namespace std;

// Área do Retângulo

// Faça um programa para ler dois valores inteiros AA e BB e imprima a área de um retângulo que tenha lados AA e BB.
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém o inteiro AA e a segunda linha contém o inteiro BB.
// Saída

// A saída consiste de uma linha contendo a área de um retângulo que tenha lados AA e BB.
// Restrições

//     Os inteiros fornecidos não terem valor maior que 1000 ou menor que 1.

int main(){
    int result = 0;
    vector<int> nums(2);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    };

    result = nums[0] * nums[1];
    
    cout << result;
}