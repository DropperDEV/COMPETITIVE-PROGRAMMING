#include <bits/stdc++.h>
#define endl '\n';
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int main(){
    int n;
    queue<int> fila;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int valor;
       cin >> valor;
       fila.push(valor);
    }
    fila.pop();
   while(!fila.empty())
    {
        cout << fila.front() << '\n'; 
        fila.pop();
    }
    

    return 0;
}