#include <bits/stdc++.h>

using namespace std;

vector<int> adj[110];
int n,m;
bool visitado[110];

void dfs(int x){
    visitado[x] = true;

    for (auto v : adj[x])
    {
        if(visitado[v]) continue;
        dfs(v);
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    int a,b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    

    //só pra ter certeza se é valido;
    dfs(1);

    while (cin >> a >> b)
    {
        if(visitado[a] and visitado[b]){
            cout << "Existe um caminho entre eles";
        } else cout << "Não existe um caminho entre eles";
    }
    
}