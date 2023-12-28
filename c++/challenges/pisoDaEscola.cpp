#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long L,C,T1,T2;
    cin >> L;
    cin >> C;
    T1 = L*C +  (L -1) * (C-1);
    T2 = ((L-1)*2)+((C-1)*2);
    cout << T1 << endl;
    cout << T2 << endl;
}