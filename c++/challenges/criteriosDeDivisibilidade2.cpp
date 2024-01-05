#include <bits/stdc++.h>

using namespace std;

// Critérios de Divisibilidade 2

// Escreva um programa que testa se um número é divisível por 4, 9 ou 25.
// Entrada

// A única linha dos casos de teste contém um número NN.
// Saída

// Imprima 3 linhas, na primeira linha escreva 'S' se o número for divisível por 4 e 'N' caso contrário, na segunda linha faça o mesmo para 9 e na terceira linha para 25.
// Restrições

//     0≤N≤101000000≤N≤10100000

int charToInt(char a){
    return a - '0';
}

int main(){
    string s;
    cin >> s;
    int ultimoAlgarismo = s.size() - 1;

    if(ultimoAlgarismo == 0 ){
        if(charToInt(s[ultimoAlgarismo]%4 == 0)) cout << 'S' << '\n';
        else cout << 'N' << '\n';

    }
    else if((2*charToInt(s[ultimoAlgarismo-1])+charToInt(s[ultimoAlgarismo]))%4 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';

    
  

    int soma = 0;

    for (int i = 0; i <= ultimoAlgarismo; i++)
    {
        soma += charToInt(s[i]);
    }

    if(soma%9 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';

    if(ultimoAlgarismo == 0 ){
            if(charToInt(s[ultimoAlgarismo]%25 == 0)) cout << 'S' << '\n';
            else cout << 'N' << '\n';
        }
    else if((10 * charToInt(s[ultimoAlgarismo - 1]) + charToInt(s[ultimoAlgarismo])) %25 == 0) cout << 'S' << '\n';
    else cout << 'N' << '\n';
    
    return 0;
}