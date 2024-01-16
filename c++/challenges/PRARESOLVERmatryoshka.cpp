#include <bits/stdc++.h>

using namespace std;

// Matryoshka

// Bia acabou de voltar de viagem da Rússia e, como não poderia faltar, trouxe várias Matryoshkas na mala, aquelas bonecas russas que ficam uma dentro da outra. Sendo uma jovem extremamente organizada, ela guarda as bonecas em sua estante, ordenadas da menor para a maior.

// Seus irmãos, no entanto, adoram deixá-la com raiva, e, por isso, bagunçam a ordem das bonecas toda vez que Bia sai de casa. Pela sua obsessão com a ordem das coisas, toda vez que chega em casa, Bia coloca as bonecas de volta em ordem.

// Como ela já está ficando cansada disso, decidiu que irá sempre reorganizá-las com o menor esforço possível. Para isso, ela as ordenará da seguinte forma: irá recolher todas as bonecas que estão fora do lugar e depois posicioná-las, uma a uma, no local correto. Se duas bonecas são do mesmo tamanho, a ordem delas não importa, e Bia sempre quer recolher a menor quantidade possível delas.

// Sabendo que terá que fazer isso toda vez que chega em casa, ela decidiu que fará um programa para auxiliá-la a descobrir quais bonecas irá recolher.
// Entrada

// A entrada consiste de duas linhas. A primeira linha tem um único inteiro NN: a quantidade de bonecas de Bia. A segunda tem NN inteiros: os tamanhos das bonecas na ordem em que seus irmãos deixaram.
// Saída

// Seu programa deve gerar duas linhas. A primeira deve conter um único inteiro: a quantidade de bonecas que Bia deverá recolher. A segunda deve conter, em ordem crescente, os tamanhos de cada uma das bonecas a serem recolhidas.
// Subtask 1 (30 pontos)

//     1≤N≤1051≤N≤105
//     Todas as alturas das bonecas são inteiros distintos entre 11 e NN.

// Subtask 2 (70 pontos)

//     1≤N≤1051≤N≤105
//     Todas as alturas das bonecas são inteiros positivos menores que 109109.

int main(){
    int numBonecas;
    cin >> numBonecas;
    vector<int> tamanhos(numBonecas);
    vector<int> praAjeitar;

    for (int i = 0; i < numBonecas; i++)
    {
        cin >> tamanhos[i];
    }

    for (int i = 0; i < numBonecas; i++) {
        if (tamanhos[i] < tamanhos[i-1] or tamanhos[i] > tamanhos[i+1]) {
            praAjeitar.push_back(tamanhos[i]);
        }
    }

    sort(praAjeitar.begin(), praAjeitar.end());

    for (int i = 0; i < praAjeitar.size(); i++)
    {
        cout << praAjeitar[i];
    }
    
        
    return 0;
}