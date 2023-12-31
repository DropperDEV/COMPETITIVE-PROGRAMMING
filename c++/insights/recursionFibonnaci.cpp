#include <bits/stdc++.h>

using namespace std;

int fib(int n){
    if(n == 1 or n == 2) return 1;
    return fib( n - 1) + fib( n - 2);
}


int main(){
    int num;
    cout << "digite um numero: ";
    cin >> num;
    cout << fib(num) << '\n';
    return 0;
}