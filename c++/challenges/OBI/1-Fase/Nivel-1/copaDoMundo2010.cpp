#include <bits/stdc++.h>
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

// Copa do Mundo (OBI 2010)

// Este ano tem Copa do Mundo! O país inteiro se prepara para torcer para a equipe canarinho conquistar mais um título, tornando-se hexacampeã.

// Na Copa do Mundo, depois de uma fase de grupos, dezesseis equipes disputam a Fase Final, composta de quinze jogos eliminatórios. A figura abaixo mostra a tabela de jogos da Fase Final:

// Figura 1 https://neps.academy/_ipx/_/https://api.neps.academy/image/1358.png

// Dados os resultados dos quinze jogos da Fase Final, escreva um programa que determine a equipe campeã.
// Entrada

// A entrada é composta de quinze linhas, cada uma contendo o resultado de um jogo. A primeira linha contém o resultado do jogo de número 1, a segunda linha o resultado do jogo de número 2, e assim por diante. O resultado de um jogo é representado por dois números inteiros MM e NN separados por um espaço em branco, indicando respectivamente o número de gols da equipe representada à esquerda e à direita na tabela de jogos.
// Saída

// Seu programa deve imprimir uma única linha, contendo a letra identificadora da equipe campeã.
// Restrições

//     0≤N0≤N, M≤20M≤20 e M≠NM=N

int main(){
    queue<char> jogo;

    for (char c = 'A'; c <= 'P'; c++)
    {
        jogo.push(c);
    }

    int n,m;
    while(jogo.size() > 1){
        cin >> n >> m;
        char a = jogo.front();
        jogo.pop();
        char b = jogo.front();
        jogo.pop();

        if(n>m){
            jogo.push(a);
        } else jogo.push(b);
    }

    cout << jogo.front();

    return 0;
}