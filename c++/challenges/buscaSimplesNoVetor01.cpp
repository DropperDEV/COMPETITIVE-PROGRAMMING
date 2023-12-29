#include <iostream>

using namespace std;

// Busca Simples no Vetor 01

// Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro XX. Imprima "SIM" se XX aparece no vetor, ou "NAO" caso contrário.
// Entrada

// A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro XX.
// Saída

// Imprima "SIM" se XX aparece no vetor, ou "NAO" caso contrário.
// Restrições

// Todos os valores fornecidos não serão negativos nem maiores que 100.

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

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (serie[i] == k)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }

    return 0;
}
