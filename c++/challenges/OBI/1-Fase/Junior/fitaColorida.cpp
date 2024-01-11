#include <bits/stdc++.h>

using namespace std;

// Fita Colorida

// Roberto tem um conjunto de lápis com 10 tons diferentes de uma mesma cor, numerados de 0 a 9. Numa fita quadriculada, alguns quadrados foram coloridos inicialmente com o tom 0.

// Roberto precisa determinar, para cada quadrado QQ não colorido, qual é a distância dele para o quadrado mais próximo de tom 0. A distância entre dois quadrados é definida com o número mínimo de movimentos para a esquerda, ou para a direita, para ir de um quadrado para o outro. O quadrado QQ, então, deve ser colorido com o tom cuja numeração corresponde à distância determinada. Se a distância for maior ou igual a 9, o quadrado deve ser colorido com o tom 9. Seu programa deve colorir e imprimir a fita quadriculada dada na entrada.
// Entrada

// A primeira linha da entrada contém apenas um inteiro NN, indicando o número de quadrados da fita. A segunda linha contém NN números inteiros: “-1” se o quadrado não está colorido, e “0” se está colorido com o tom 0.
// Saída

// Seu programa deve escrever na saída a fita totalmente colorida, de acordo com a regra definida acima.
// Restrições

//     3≤N≤1043≤N≤104
//     Sempre existe pelo menos um “0” inicialmente na fita.

int main() {
    int N;
    cin >> N;

    vector<int> fita(N);
    for (int i = 0; i < N; i++) {
        cin >> fita[i];
    }

    for (int i = 0; i < N; i++) {
        if (fita[i] == -1) {
            int distancia = 0;
            
            for (int j = i - 1; j >= 0; j--) {
                if (fita[j] == 0) {
                    distancia = i - j;
                    break;
                }
            }

            for (int j = i + 1; j < N; j++) {
                if (fita[j] == 0) {
                    if (distancia == 0 || j - i < distancia) {
                        distancia = j - i;
                    }
                    break;
                }
            }

            fita[i] = min(distancia, 9);
        }
    }

    for (int i = 0; i < N; i++) {
        cout << fita[i] << " ";
    }

    return 0;
}