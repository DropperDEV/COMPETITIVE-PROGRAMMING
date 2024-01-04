#include <bits/stdc++.h>

using namespace std;

// Botas Trocadas

// A divisão de Suprimentos de Botas e Calçados do Exército comprou um grande número de pares de botas de vários tamanhos para seus soldados. No entanto, por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé. O sargento mandou que os recrutas retirassem todas as botas de todas as caixas para reembalá-las, desta vez corretamente.

// Quando o sargento descobriu que você sabia programar, ele solicitou com a gentileza habitual que você escrevesse um programa que, dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total.
// Entrada

// A primeira linha da entrada contém um inteiro NN indicando o número de botas individuais entregues. Cada uma das NN linhas seguintes descreve uma bota, contendo um número inteiro MM e uma letra LL, separados por um espaço em branco. MM indica o número do tamanho da bota e LL indica o pé da bota: LL = ‘D’ indica que a bota é para o pé direito, LL = ‘E’ indica que a bota é para o pé esquerdo.
// Saída

// Seu programa deve imprimir uma única linha contendo um único número inteiro indicando o número total de pares corretos de botas que podem ser formados.




int main() {
    int n;
    cin >> n;

    int vetor[n*2];

    for (int i = 0; i < n; i++) {
        int size;
        char foot;
        cin >> size >> foot;

        int index = size * 2 + (foot == 'E' ? 1 : 0);
    }

    int totalPairs = 0;


    for (int i = 0; i < n*2; i++) {
        totalPairs += vetor[i] / 2;
    }

  
    

    cout << totalPairs << endl;

    return 0;
}