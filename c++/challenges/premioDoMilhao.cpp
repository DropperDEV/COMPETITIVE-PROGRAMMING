#include <bits/stdc++.h>

using namespace std;

// Prêmio do Milhão

// Alice e Bia criaram uma página na Internet com informações sobre o Macaco-prego-de-peito-amarelo, uma espécie em extinção. A página mostra como todos podem ajudar a manter o habitat natural para evitar que a espécie seja extinta.

// Uma empresa gostou tanto da iniciativa de Alice e Bia que prometeu doar um prêmio para que as duas amigas possam realizar outras iniciativas semelhantes. A empresa decidiu que o prêmio seria dado quando a soma do número de acessos à página chegasse a 1 milhão.

// Dada a lista de acessos diários que ocorreram à página de Alice e Bia, escreva um programa para determinar quantos dias foram necessários para a soma dos acessos chegar a 1 milhão e as amigas ganharem o prêmio.
// Entrada

// A primeira linha da entrada contém um número inteiro NN, que indica o número de dias que a lista contém. Cada uma das linhas seguintes contém um único inteiro AA, o número de acessos em um dia. O primeiro número dado indica o número de acessos no primeiro dia, o segundo número dado indica o número de acessos no segundo dia, e assim por diante.
// Saída

// Seu programa deve escrever na saída uma única linha, contendo um único número inteiro, o número de dias que foram necessários para a soma dos acessos à pagina de Alice e Bia chegar a 1000000.
// Restrições

//     1≤N≤1031≤N≤103, ou seja, a lista tem no máximo 1000 números
//     0≤A≤1060≤A≤106, ou seja, cada inteiro AA da lista é positivo e menor do que ou igual a 1 milhão.
//     A soma de todos os valores AA da lista é maior do que ou igual a 1 milhão (ou seja, Alice e Bia certamente ganham o prêmio).

int main(){
    int n,a,i = 0,total = 0;
    
    cin >> n;
    while(total < 1000000)
    {
        cin >> a;
        total += a;
        i++;
    }
    cout << i;
    

    return 0;
}
