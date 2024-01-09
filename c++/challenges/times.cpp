#include <bits/stdc++.h>

using namespace std;

// Times

// As aulas de educação física, em muitas escolas, acontecem da seguinte maneira: O professor entrega uma bola ao alunos (geralmente de futebol) e estes se dividem em times, onde jogam partidas alternadamente.

// A maneira como os times são escolhidos também é semelhante em todas as escolas: decide-se quantos times serão formados, e uma pessoa para montar cada um dos times. Cada pessoa vai escolher, alternadamente, um dos alunos restantes para fazer parte de sua equipe. Como todos querem ter uma boa equipe, a pessoa que vai escolher o próximo membro do time escolhe aquele, dentre os ainda disponíveis, que possui o melhor nível de habilidade. Assim, os times acabam ficando relativamente equilibrados na soma do nível de habilidade dos jogadores.

// Dada uma lista de alunos que serão escolhidos e seus respectivos níveis de habilidade para os times e a quantidade de times que serão formados, mostre como ficarão os times ao final do processo de montagem dos mesmos.
// Entrada

// A primeira linha da entrada contém dois inteiros NN e TT, representando respectivamente a quantidade de alunos e o número de times a serem formados, sendo TT ≤≤ NN. As NN linhas seguintes descrevem, cada uma, um aluno disponível para escolha de times. Cada uma dessas linhas possui o nome do aluno (composto apenas por letras minúsculas) e um inteiro HH descrevendo seu nível de habilidade).

// Não existem dois alunos com o mesmo nível de habilidade, e todos eles possuem nomes diferentes. É possível que alguns times acabem ficando com menos jogadores do que os outros.
// Saída

// Seu programa deve imprimir a lista de times que será formada ao final do processo de seleção. Para cada time, você deverá mostrar o termo "Time NN", onde NN é o número do time (1 para o primeiro, 2 para o segundo, e assim por diante) seguido de KK linhas, onde KK é a quantidade de jogadores do time, mostrando o nome de cada um dos jogadores do time, em ordem alfabética. Imprima uma linha em branco após cada descrição de time (inclusive do último).

// Os times serão escolhidos pelo computador, então não é necessário considerar o aluno que irá fazer a escolha dos times.
// Restrições

//     2≤N≤100002≤N≤10000
//     2≤T≤10002≤T≤1000
//     0≤H≤10000000≤H≤1000000

vector< pair<int,string> > jogadores;
vector< pair<int,string> > times[1010];

bool ordernar_habilidade(pair<int,string> a, pair<int,string> b){
    return a.first > b.first;
}

bool ordernar_nomes(pair<int,string> a, pair<int,string> b){
    return a.second < b.second;
}

int main(){
    int n,t,habilidade;
    string nome;
 
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> nome >> habilidade;
        jogadores.push_back({habilidade,nome});
    }

    sort(jogadores.begin(), jogadores.end(), ordernar_habilidade);
    for (int i = 0; i < jogadores.size(); i++)
    {
        times[i % t].push_back(jogadores[i]);
    }

    for (int i = 0; i < t; i++)
    {
        sort(times[i].begin(), times[i].end(), ordernar_nomes);
    }

    for (int i = 0; i < t; i++)
    {
        cout << "Time " << i+1 << '\n';
        for (int j = 0; j < times[i].size(); j++)
        {
            cout << times[i][j].second << '\n';
        }
        cout << '\n';
    }
    
    return 0;
}