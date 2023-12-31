#include <bits/stdc++.h>

using namespace std;

#define mxN 10010

int n,k, v[mxN];


int main(){
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v,v+n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << '\n';
    }
    
    
}


// ORDERNADR E FAZER BB, OU BUSCAR DE FORMA LINEAR?
// DEPENDE: O(n) < o(n*log(n) + log(n))
// SE EU FOR ESSSA BUSCA M VEZES
// O(n*m) > O(n*log(n) + m*log(n))