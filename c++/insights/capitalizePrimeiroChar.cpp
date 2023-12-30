#include <bits/stdc++.h>

using namespace std;

int main()
{
    string frase;
    getline(cin, frase);
    for (int i = 0; i < frase.size(); i++)
    {
        if (i == 0 or frase[i - 1] == ' ')
        {
            if (frase[i] >= 'a' and frase[i] <= 'z')
            {
                frase[i] = frase[i] - 32;
            }
        }
    }

    cout << frase << '\n';
    return 0;
}