#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;
    char op;
    cin >> op;
    cin >> a >> b;
    double d = a / b;
    double m = a * b;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (op == 'M')
    {
        cout << m;
    }
    else if (op == 'D')
    {
        cout << d;
    }
    else
    {
        cout << "Opção invalida";
    }
    return 0;
}