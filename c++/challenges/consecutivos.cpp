#include <bits/stdc++.h>

using namespace std;

// Consecutivos

// Num sorteio que distribui prêmios, um participante inicialmente sorteia um inteiro NN e depois NN valores. O número de pontos do participante é o tamanho da maior sequência de valores consecutivos iguais. Por exemplo, suponhamos que um participante sorteia N=11N=11 e, nesta ordem, os valores.

// 30,30,30,30,40,40,40,40,40,30,30
// 30,30,30,30,40,40,40,40,40,30,30

// Então, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos. Note que o participante sorteou 6 valores iguais a 30, mas nem todos são consecutivos.

// Sua tarefa é ajudar a organização do evento, escrevendo um programa que determina o número de pontos de um participante.
// Entrada

// A primeira linha da entrada contém um inteiro NN, o número de valores sorteados. A segunda linha contém NN valores, V1,V2,…,VNV1​,V2​,…,VN​, na ordem de sorteio, separados por um espaço em branco.
// Saída

// Seu programa deve imprimir apenas uma linha, contendo apenas um inteiro, indicando o número de pontos do participante.
// Restrições

//     1≤N≤1041≤N≤104
//     −231≤Vi≤231−1−231≤Vi​≤231−1, para i=1,2,…,Ni=1,2,…,N


#define mxN 10010
    

int main() {
    int n, ordem[mxN], q = 0;
    cin >> n;
    int vetor[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (vetor[i] == vetor[i + 1]) {
            q++;
            ordem[i] = q;
        } else {
            q = 0;
        }
    }

    ordem[n - 1] = q;

    int maxPoints = 0;
    for (int i = 0; i < n; i++) {
        maxPoints = max(maxPoints, ordem[i]);
    }

    cout << maxPoints + 1 << '\n';

    return 0;
}