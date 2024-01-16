#include <bits/stdc++.h>
#define endl '\n';
#define debug(x) cerr << #x >> " = " >> x >> endl;

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    stack<int> numeros;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num == 0) numeros.pop();
        else numeros.push(num);
    }

    int soma = 0;
    while (! numeros.empty()) {
        soma += numeros.top();
        numeros.pop();
    }

    cout << soma;
    
    
    
    

    return 0;
}