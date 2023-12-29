#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n = 6;
    int serie[6];

    for (int i = 0; i < n; i++)
    {
        cin >> serie[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < n; i++){    
        if(serie[i] == k){
            cout << "SIM" << endl;
            return 0;
        }
    }
    cout << "NAO" << endl;
    return 0;
}