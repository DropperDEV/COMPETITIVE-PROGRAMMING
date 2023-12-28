#include <bits/stdc++.h>

using namespace std;

// Jogo de Par ou Impar

// Dois amigos, Alice e Bob, estão jogando um jogo muito simples, em que um deles grita ou “par” ou “ímpar” e o outro imediatamente responde ao contrário, respectivamente “ímpar” ou “par”. Em seguida, ambos exibem ao mesmo tempo uma mão cada um, em que alguns dedos estão estendidos e outros dobrados. Então eles contam o número total de dedos estendidos. Se a soma for par, quem gritou “par” ganha. Se a soma for ímpar, quem gritou “ímpar” ganha.

// Por exemplo, suponhamos que a Alice gritou “par” e o Bob respondeu “ímpar”. Em seguida, Alice não deixou nenhum dos seus dedos estendidos, ao passo que Bob deixou três dedos estendidos. A soma então é três, que é ímpar, portanto Bob ganhou.

// Seu programa deve determinar quem ganhou, tendo a informação de quem gritou par e o número de dedos estendidos de cada um.
// Entrada

// A entrada contém três linhas, cada uma com um número inteiro, PP, D1D1​ e D2D2​, nesta ordem. Se PP = 0 então Alice gritou “par”, ao passo que se PP = 1 então Bob gritou “par”. Os números D1D1​ e D2D2​ indicam, respectivamente, o número de dedos estendidos da Alice e do Bob.
// Saída

// Seu programa deverá imprimir uma única linha, contendo um único número inteiro, que deve ser 0 se Alice foi a ganhadora, ou 1 se Bob foi o ganhador.
// Restrições

//     P=0P=0 ou P=1P=1
//     0≤D1≤50≤D1​≤5
//     0≤D2≤50≤D2​≤5



int main()
{
    int p, d1, d2;
    cin >> p >> d1 >> d2;
    if ((d1 + d2) % 2 == 0)
    {
        cout << p << endl;
    }
    if ((d1 + d2) % 2 != 0)
    {
        cout << 1 - p << endl;
    }
    return 0;
}