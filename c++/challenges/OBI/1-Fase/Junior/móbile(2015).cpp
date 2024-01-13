#include <bits/stdc++.h>

using namespace std;

// Móbile (OBI 2015)

// O móbile na sala da Maria é composto de três hastes exatamente como na figura abaixo. Para que ele esteja completamente equilibrado, com todas as hastes na horizontal, os pesos das quatro bolas AA, BB, CC e DD têm que satisfazer todas as seguintes três condições:

//     A=B+C+DA=B+C+D;
//     B+C=DB+C=D;
//     B=CB=C;

// Figura 1 https://neps.academy/_ipx/_/https://api.neps.academy/image/1303.png

// Nesta tarefa, dados os pesos das quatro bolas, seu programa deve decidir se o móbile está ou não completamente equilibrado.
// Entrada

// A entrada consiste de quatro linhas contendo, cada uma, um número inteiro, indicando os pesos das bolas. Os números são dados na ordem: AA, BB, CC e DD.
// Saída

// Seu programa deve escrever uma única linha na saída, contendo o caractere “S” se o móbile estiver equilibrado, ou o caractere “N” se não estiver equilibrado.
// Restrições

//     1≤A,B,C,D≤10001≤A,B,C,D≤1000

int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if(A == B+C+D and B+C == D and B == C) cout << 'S';
    else cout << 'N';

    return 0;
}