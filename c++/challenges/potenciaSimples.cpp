#include <bits/stdc++.h>

using namespace std;

// Potências Simples

// Enquanto você estava estudando no Neps Academy você viu um problema chamado "Potências Simples" e resolveu lê-lo, o problema pedia para você ler dois números reais e imprimisse um número elevado ao outro. Faça um programa que resolva o problema.
// Entrada

// A entrada é composta por apenas uma linha que contem dois números reais, xx e yy.
// Saída

// Seu programa deve imprimir um único número xyxy com 4 casas decimais de precisão.
// Restrições

//     0≤x≤100000≤x≤10000
//     1≤y≤101≤y≤10
//     xy≤109xy≤109


int main(){
    cout.precision(4);
    cout.setf(ios::fixed);


    long double n,m,result;
    cin >> n >> m;
    result = pow(n,m);
    cout << result;
    return 0;

}