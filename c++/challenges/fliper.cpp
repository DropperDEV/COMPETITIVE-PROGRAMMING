#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, r;
    cin >> p >> r;

    if (p == 0)
    {
        cout << 'C' << '\n';
    }
    else if (p == 1)
    {
        if (r == 0)
        {
            cout << 'B' << '\n';
        }
        else if (r == 1)
        {
            cout << 'A' << '\n';
        }
        else
        {
            cout << "Posição não existe" << '\n';
        }
    }
    else
    {
        cout << "Posição não existe" << '\n';
    }

    return 0;
}