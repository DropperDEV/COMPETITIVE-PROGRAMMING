#include <iostream>

using namespace std;

// Busca Simples no Vetor 02

// Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro XX. Se XX aparece no vetor, imprima quantas vezes ele aparece e depois quais os índices que ele aparece. Se XX não aparecer no vetor, imprima apenas a mensagem "Mia x". Lembre-se que a primeira posição de um vetor tem índice 0.
// Entrada

// A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro XX.
// Saída

// Se XX aparece no vetor, a saída consiste de duas linhas, a primeira linha contém um inteiro representando a quantidade de vezes que XX apareceu no vetor e a segunda linha contém os índices do vetor que contém valor igual ao XX. Se XX não aparecer no vetor, imprima apenas a mensagem "Mia x".

int main()
{
    int n = 10;
    int serie[10];

    for (int i = 0; i < n; i++)
    {
        cin >> serie[i];
    }

    int k;
    cin >> k;
    int q = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (serie[i] == k)
        {
            q++;
            found = true;
        }
    }

    if (found)
    {
        int qi[q];
        int idx = 0;
        for(int i = 0; i < n; i++)
            {
                if (serie[i] == k)
                {
                    qi[idx++] = i;
                }
            }
        cout << q << endl;
        for(int i = 0; i < q; i++)
            {
                cout << qi[i] << " ";
            }
    }
    else
    {
        cout << "Mia x" << endl;
    }

    return 0;
}
