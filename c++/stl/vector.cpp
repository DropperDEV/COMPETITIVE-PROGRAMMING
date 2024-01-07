#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho;
    vector<int> valores;
    valores.push_back(10);
    valores.push_back(100); // push back adiciona valor e cria um indice novo
    tamanho = valores.size();
    cout << valores[0] << ' ' << valores[1] << ' ' << tamanho << '\n';
    valores.pop_back(); // remove o ultimo valor, e também o ultimo indice em conjunto
    tamanho = valores.size();
    cout << valores[0] << ' ' << tamanho << '\n'; // << ' ' << valores[1]; não existe
    return 0;
}