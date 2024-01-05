#include <bits/stdc++.h>

using namespace std;



bool primos[10100000];

void crivo(int n){
    for (int i = 2; i <= n; i++)
    {
        if(primos[i]){
            for (int j = 2; j * i <= n; j++)
            {
                primos[j*i] = false;
            }
            
        }
    }
    return;
}
int main(){
    int  n;
    cin >> n;
    
    for (int i = 0; i <= n; i++)
    {
        primos[i] = true;
    }

    crivo(n);

    for (int i = 2; i <= n; i++)
    {
        if(primos[i]) cout << i << ' ';
    }
    
    
   
    return 0;
}

// O(n)
// O(10^7)