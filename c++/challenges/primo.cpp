#include <bits/stdc++.h>

using namespace std;

// Primo

// Modifique o código abaixo, adicionando o código da função eh_primo, que deve retornar true quando o número xx for primo e false caso contrário.

// Entrada
// A entrada do seu programa será apenas uma linha contendo o número inteiro xx.

// Saída
// Seu programa deve imprimir na saída padrão uma única linha contendo "S" caso o xx seja primo e "N" caso contrário.
// Restrições

//     1≤x≤1051≤x≤105

bool eh_primo(int x)
{
    if (x <= 1)
    {
        return false;
    }

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
};

int main()
{
    int x;
    cin >> x;

    if (eh_primo(x))
    {
        cout << "S"
             << "\n";
    }
    else
    {
        cout << "N"
             << "\n";
    }
    return 0;
}