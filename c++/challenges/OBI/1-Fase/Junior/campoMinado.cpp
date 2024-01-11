#include <bits/stdc++.h>

using namespace std;

//  Campo Minado

// Leonardo é um garoto fascinado por jogos de tabuleiro. 
// Nas férias de janeiro, ele aprendeu um jogo chamado Campo minado, que é jogado em um tabuleiro com NN células dispostas na horizontal. 
// O objetivo desse jogo é determinar, para cada célula do tabuleiro, o número de minas explosivas nos arredores da mesma (que são a própria célula e as células imediatamente vizinhas à direita e à esquerda, caso essas existam). 

// A primeira célula não possui nenhuma mina explosiva, mas é vizinha de uma célula que possui uma mina explosiva. Nos arredores da segunda célula temos duas minas, e o mesmo acontece para a terceira e quarta células; a quinta célula só tem uma mina explosiva em seus arredores.

// Leonardo sabe que você participa da OBI e resolveu lhe pedir para escrever um programa de computador que, dado um tabuleiro, imprima o número de minas na vizinhança de cada posição. Assim, ele poderá conferir as centenas de tabuleiros que resolveu durante as férias.


// A primeira linha da entrada contém um inteiro NN indicando o número de células no tabuleiro. O tabuleiro é dado nas próximas NN linhas. A i-ésima linha seguinte contém 0 se não existe mina na i-ésima célula do tabuleiro e 1 se existe uma mina na i-ésima célula do tabuleiro.
// Saída

// A saída é composta por NN linhas. A i-ésima linha da saída contém o número de minas explosivas nos arredores da i-ésima célula do tabuleiro.
// Restrições

//     1≤N≤501≤N≤50

int main(){
    int n,mina;
    cin >> n;
    vector<int> tabuleiro;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        tabuleiro.push_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        mina = 0;
        if(tabuleiro[i - 1] == 1) mina++;
        if(tabuleiro[i] == 1) mina++;
        if(tabuleiro[i + 1] == 1) mina++;

        cout << mina << '\n';
    }
    return 0;
};