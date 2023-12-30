#include <bits/stdc++.h>

using namespace std;

int somaNumerosNaturais(int n){
    if(n == 1) return 1;
    return somaNumerosNaturais( n - 1) + n;
}


int main(){
    cout << somaNumerosNaturais(10) << '\n';
    return 0;
}