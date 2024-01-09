#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<int,int> valores1;
    pair<int,int> valores2;
    valores1 = {1,2}; // lê se da direita para a esquerda
    // valores.first é o da esquerda
    // valores.second é o da direita
    valores2 = {3,2};
    if(valores1 > valores2) cout << 1;
    else cout << 2;

    return 0;
}