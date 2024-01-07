#include <bits/stdc++.h>

using namespace std;

// Soma de Casas

// Joãozinho mora em uma rua que tem NN casas. Marquinhos é o melhor amigo dele, mas sempre gosta de pregar peças em Joãozinho. Desta vez, ele pegou os dois brinquedos prediletos de Joãozinho e os escondeu em duas casas distintas da rua. Em compensação, Marquinhos deu uma dica importante para Joãozinho:

// A soma dos números das casas em que escondi teus brinquedos é igual a KK. Além disso, escolhi as casas de tal forma que não existe outro par de casas cuja soma tenha esse mesmo valor.

// Sabendo disto, encontre qual é o par de casas em que se encontram os brinquedos de Joãozinho. Para auxiliar seu amigo, Marquinhos entregou a Joãozinho uma lista com o número das casas já em ordem crescente (isto é, do menor para o maior número).
// Entrada

// A primeira primeira linha da entrada contém um número inteiro NN, que representa o número de casas que existem na rua. Cada uma das NN linhas seguintes contém um número inteiro, representando o número de uma casa. Note que esses NN números estão ordenados, do menor para o maior.

// A última linha da entrada contém um inteiro KK, que é a soma dos números das duas casas onde os brinquedos estão escondidos.
// Saída

// Se programa deve imprimir uma única linha, contendo dois inteiros, AA e BB, A<BA<B, que representam os números das casas em que estão escondidos os brinquedos. Os dois números devem ser separados por um espaço em branco.
// Restrições

//     2≤N≤1052≤N≤105
//     0≤Ci≤1090≤Ci​≤109



int main() {
    int n, k;
    cin >> n;
    int casas[n];

    for (int i = 0; i < n; i++) {
        cin >> casas[i];
    }

    cin >> k;

    for (int i = 0; i < n - 1; i++) {
        if (casas[i] + casas[i + 1] == k) {
            cout << casas[i] << ' ' << casas[i + 1];
            break; 
        } else if (casas[i] == k && casas[i + 1] == k) {
            break; 
        }
    }

    return 0;
}