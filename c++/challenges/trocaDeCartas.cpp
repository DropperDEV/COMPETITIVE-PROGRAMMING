#include <bits/stdc++.h>

using namespace std;

// Troca de Cartas

// Alice e Beatriz colecionam cartas de Pokémon. As cartas são produzidas para um jogo que reproduz a batalha introduzida em um dos mais bem sucedidos jogos de videogame da história, mas Alice e Beatriz são muito pequenas para jogar, e estão interessadas apenas nas cartas propriamente ditas. Para facilitar, vamos considerar que cada carta possui um identificador único, que é um número inteiro.

// Cada uma das duas meninas possui um conjunto de cartas e, como a maioria das garotas de sua idade, gostam de trocar entre si as cartas que têm. Elas obviamente não têm interesse em trocar cartas idênticas, que ambas possuem, e não querem receber cartas repetidas na troca.

// Além disso, as cartas serão trocadas em uma única operação de troca: Alice dá para Beatriz um sub-conjunto com NN cartas distintas e recebe de volta um outro sub-conjunto com NN cartas distintas.

// As meninas querem saber qual é o número máximo de cartas que podem ser trocadas. Por exemplo, se Alice tem o conjunto de cartas {1, 1, 2, 3, 5, 7, 8, 8, 9, 15} e Beatriz o conjunto {2, 2, 2, 3, 4, 6, 10, 11, 11}, elas podem trocar entre si no máximo quatro cartas. Escreva um programa que, dados os conjuntos de cartas que Alice e Beatriz possuem, determine o número máximo de cartas que podem ser trocadas.
// Entrada

// A primeira linha de um caso de teste contém dois números inteiros AA e BB, separados por um espaço em branco, indicando respectivamente o número de cartas que Alice e Beatriz possuem. A segunda linha contém AA números inteiros XiXi​, separados entre si por um espaço em branco, cada número indicando uma carta do conjunto de Alice. A terceira linha contém BB números inteiros YiYi​, separados entre si por um espaço em branco, cada número indicando uma carta do conjunto de Beatriz. As cartas de Alice e Beatriz são apresentadas em ordem não decrescente.
// Saída

// Para cada caso de teste da entrada seu programa deve imprimir uma única linha, contendo um numero inteiro, indicando o número máximo de cartas que Alice e Beatriz podem trocar entre si.
// Restrições

//     1≤A≤1041≤A≤104
//     1≤B≤1041≤B≤104
//     1≤Xi1≤Xi​, YiYi​ ≤≤ 105105

set<int> alice,beatriz;
vector<int> alicev,beatrizv;

int main(){
    int a,b,auxiliar, contador_alice = 0, contador_beatriz = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> auxiliar;
        if(!alice.count(auxiliar)){
            alicev.push_back(auxiliar);
        }
        alice.insert(auxiliar);
    }

    for (int i = 0; i < b; i++)
    {
        cin >> auxiliar;
        if(!beatriz.count(auxiliar)){
            beatrizv.push_back(auxiliar);
        }
        beatriz.insert(auxiliar);
    }
    for (int i = 0; i < alicev.size(); i++)
    {
        if(!beatriz.count(alicev[i])) contador_alice++;
    }

    for (int i = 0; i < beatrizv.size(); i++)
    {
        if(!alice.count(beatrizv[i])) contador_beatriz++;
    }
    cout << min(contador_alice, contador_beatriz) << '\n';
    return 0;
};