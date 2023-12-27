#include <bits/stdc++.h>

using namespace std;

// possível incrementer um valor a adição de outro com +=, para outras operações repita o processo
// alterando o simbolo da operação, -=, *= etc


// # ALGUMAS FUNÇÕES IMPORTANTES #
// pwr(x,y) : x ^ y
// sqrt(x) : raiz de x // x ^ 1/2
int main(){
    double a,b;
    int c,d;
    cout << "digite o valor de A:";
    cin >> a;
    cout << "digite o valor de B:";
    cin >> b;
    int soma = a + b;
    int subtracao = a - b;
    int produto =  a * b;
    double divisao = a / b;
    c = a;
    int restoA = c % 2;
    d = b;
    int restoB = d % 2;

    cout << "soma:" << soma << endl;    
    cout << "subtracao:" << subtracao << endl;
    cout << "produto:" << produto << endl;
    cout << "divisao:" << divisao << endl;
    cout << "se A for par retorna(0):  " << restoA << endl;
    cout << "se B for par retorna(0):  " << restoB << endl;

}