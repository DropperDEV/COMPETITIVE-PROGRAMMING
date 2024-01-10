#include <bits/stdc++.h>

using namespace std;

// Ordenação Simples

// Imprima os termos de uma sequência, do menor para o maior.
// Entrada

// A primeira linha da entrada contém um inteiro NN, representando o número de elementos da sequência.

// A segunda linha contém NN inteiros: os NN números da sequência
// Saída

// Seu programa deve gerar uma única linha: os NN números da entrada, em ordem crescente.
// Restrições

//     1≤N≤1041≤N≤104
//     para cada número aiai​ da sequência, temos −109≤ai≤109−109≤ai​≤109

bool ordernar_crescente(int a, int b){
    return a < b;
}

int main(){
    int vezes;
    cin >> vezes;
    vector<int> nums(vezes);

    for (int i = 0; i < vezes; i++)
    {
        cin >> nums[i];
    }
    
    sort(nums.begin(),nums.end(), ordernar_crescente);

    for (int i = 0; i < vezes; i++)
    {
        cout << nums[i] << ' ';
    }
    
    return 0;
}