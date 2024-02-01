#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> adj[110];
    int n,m;
    cin >> n >> m;

    int a,b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        //grafo não direcionado
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    while(cin >> a >> b){
        bool achou = false;
        for(auto v : adj[a]){
            if(v == b) achou = true;
        }

        if(achou) cout << "ESTAO LIGADOS" << endl;
        else cout << "NAO ESTAO LIGADOS" << endl;
    }
    

    return 0;
}