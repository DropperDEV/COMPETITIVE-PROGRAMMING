#include <bits/stdc++.h>

using namespace std;

// Lâmpadas

// Você está de volta em seu hotel na Tailândia depois de um dia de mergulhos. O seu quarto tem duas lâmpadas. Vamos chamá-las de AA e BB. No hotel há dois interruptores, que chamaremos de I1I1​ e I2I2​. Ao apertar I1I1​, a lâmpada AA acende se estiver apagada, e apaga se estiver acesa. Se apertar I2I2​, cada uma das lâmpadas AA e a BB troca de estado: se estiver apagada, fica acesa e se estiver acesa apaga.

// As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu bolar um desafio para você. Ele irá apertar os interruptores em uma certa sequência, e gostaria que você respondesse o estado final das lâmpadas AA e BB.
// Entrada

// A primeira linha contém um número NN que representa quantas vezes seu amigo irá apertar algum interruptor. Na linha seguinte seguirão N números, que pode ser 1, se o interruptor I1I1​ foi apertado, ou 2, se o interruptor I2I2​ foi apertado.
// Saída

// Seu programa deve imprimir dois valores, em linhas separadas. Na primeira linha, imprima 1 se a lâmpada AA estiver acesa no final das operações e 0 caso contrário. Na segunda linha, imprima 1 se a lâmpada BB estiver acesa no final das operações e 0 caso contrário.
// Restrições

//     2≤N≤1052≤N≤105

int main()
{
    bool a = false, b = false;
    int n, nums;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums;

        if (nums == 1)
        {
            a = !a;
        }
        else if (nums == 2)
        {
            a = !a;
            b = !b;
        }
    }

    if (a == true)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }

    if (b == true)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
    return 0;
}