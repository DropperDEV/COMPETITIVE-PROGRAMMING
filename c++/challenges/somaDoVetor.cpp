#include <bits/stdc++.h>

using namespace std;

// Soma do Vetor

// Modifique o código abaixo, adicionando o código da função soma_vetor, que recebe como parâmetros um inteiro nn e um ponteiro para um vetor de inteiros vv e deve retornar um int: a soma dos nn elementos do vetor vv. Vale ressaltar que você pode trabalhar com o ponteiro para o vetor exatamente da mesma maneira que faria se trabalhasse diretamente com o vetor.

// #include <iostream>

// using namespace std;

// int soma_vetor(int n, int v[]){
// 	// Seu código aqui.
// }

// int main(){
	
// 	int n, v[100100];
// 	cin >> n;
	
// 	for(int i=0;i<n;i++)
// 		cin >> v[i];

// 	cout << soma_vetor(n,v) << "\n";
// }

// Entrada

// A entrada do seu programa terá duas linhas: a primeira delas terá um único inteiro nn, e a segunda terá os nn elementos vivi​ do vetor vv.
// Saída

// Seu programa deve imprimir na saída padrão uma única linha contendo a soma dos elementos do vetor.
// Restrições

//     1≤n≤1051≤n≤105
//     −104≤vi≤104−104≤vi​≤104

int main(){
    int n,soma = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num = 0;
        cin >> num;
        soma += num;
    }
    

    cout << soma;
    
    return 0;
}