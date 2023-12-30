#include <bits/stdc++.h>

using namespace std;

int sum(int * numbers, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += numbers[i];
    }

    return sum;
}
int main()
{
    int n;
    cout << "Digite a quantidade de numeros: ";
    cin >> n;
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Num: ";
        cin >> numbers[i];
    }

    cout << sum(numbers, n) << '\n';
    return 0;
}