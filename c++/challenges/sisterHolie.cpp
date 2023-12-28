#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ql;
    int f;
    int r = 0;
    cin >> ql;
    for (int i = 0; i < ql; i++)
    {
        cin >> f;
        if (f == 0)
        {
            r++;
        }
    }
    cout << r;
}