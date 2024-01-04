#include <bits/stdc++.h>

using namespace std;

// Bondinho

// A turma do colégio vai fazer uma excursão na serra e todos os alunos e monitores vão tomar um bondinho para subir até o pico de uma montanha. A cabine do bondinho pode levar 50 pessoas no máximo, contando alunos e monitores, durante uma viagem até o pico.

// Neste problema, dado como entrada o número de alunos AA e o número de monitores MM, você deve escrever um programa que diga se é possível ou não levar todos os alunos e monitores em apenas uma viagem!

// Figura 1
// Entrada

// A primeira linha da entrada contém um inteiro AA, representando a quantidade de alunos. A segunda linha da entrada contém um inteiro MM, representando o número de monitores.
// Saída

// Seu programa deve imprimir uma linha contendo o caractere SS se é possível levar todos os alunos e monitores em apenas uma viagem, ou o caractere NN caso não seja possível.
// Restrições

//     1≤A≤501≤A≤50
//     1≤M≤501≤M≤50

int main(){
    int alunos, monitores;
    cin >> alunos >> monitores;

    if(alunos+monitores <= 50){
        cout << 'S';
    } else{
        cout << 'N';
    }

    return 0;
}