#include <bits/stdc++.h>
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int main(){
    int n;
    cin >> n;
    map<string,int> pessoa;

    int idade;
    string nome;
    for (int i = 0; i < n; i++)
    {
        cin >> idade >> nome;
        pessoa.insert({nome,idade});
    }
    
    string pergunta;
    cin >> pergunta;
    while (pergunta != "0")
    {
        if(pessoa.count(pergunta)){
            cout << pessoa[pergunta] << endl;
        } else cout << "Pessoa nao cadastrada" << endl;

        cin >> pergunta;
    }
    

    return 0;
}