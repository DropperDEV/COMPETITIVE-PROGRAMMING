#include <bits/stdc++.h>

using namespace std;

set<int> conjunto;
int main(){
    conjunto.insert(10); // para inserir valor no set;
    conjunto.insert(100);

    cout << conjunto.size() << '\n'; // para ver o tamanho

    conjunto.erase(10); // para apagar um valor 
    
    cout << conjunto.size() << '\n'; // tamanho atual

    if(conjunto.count(100)) cout << "1000 esta no conjunto" << '\n';
    else cout << "1000 nao esta no conjunto" << '\n';

    if(conjunto.count(10)) cout << "10 esta no conjunto" << '\n';
    else cout << "10 nao esta no conjunto" << '\n';

    return 0;
}