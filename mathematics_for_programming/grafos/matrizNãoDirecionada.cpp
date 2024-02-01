#include <bits/stdc++.h>
using namespace std;

int main(){
    bool adj[110][110];
    int n,m;
    cin >> n >> m;

    int a,b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        //grafo não direcionado
        adj[a][b] = true;
        adj[b][a] = true;
    }

    while(cin >> a >> b){
        if (adj[a][b]){
            cout << "ESTAO LIGADOS" << endl;
        }
        else {
            cout << "NAO ESTAO LIGADOS" << endl;
        }
    }
    

    return 0;
}