#include <bits/stdc++.h>

using namespace std;

int charToInt(char s){
    return s - '0';
}

int main(){
    string s;
    cin >> s;


    int ultimoN = s.size() - 1;
    if(charToInt(s[ultimoN])%2 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';

    
  

    int soma = 0;

    for (int i = 0; i <= ultimoN; i++)
    {
        soma += charToInt(s[i]);
    }

    if(soma%3 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';


    if(charToInt(s[ultimoN])%5 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';
    
    return 0;
}