#include <bits/stdc++.h>

using namespace std;

#define mxN 10010   

int n, k;
int v[mxN];

int buscaLinearNoVetor(int k){
    int retorno = -1;
    for (int i = 0; i < n ; i++)
    {
        if(v[i] == k){
            retorno = i;
            break;
        }
    }
    return retorno;
    
}
int buscaBinaria(int k, int base, int topo){

    if(topo - base == 0 ){
        return -1;
    }

    int meio = (topo+base)/2;

    if(v[meio] == k){
        return meio;
    }
    else if(v[meio] > k){
        return buscaBinaria(k,base,meio - 1);
    }
    else{
        return buscaBinaria(k,meio + 1,topo);
    }
}

int main(){
    cout << "Quantos numeros serao?: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Digite os numeros: ";
        cin >> v[i];
    }

    cout << "Qual numero deseja: ";
    cin >> k;

    int busca = buscaLinearNoVetor(k);
    int bb = buscaBinaria(k,0,n - 1);


    cout << "(Usando Linear) Esta no indice:" << " " << busca << '\n';
    cout << "(Usando Binaria) Esta no indice:" << " " << bb << '\n';

    return 0;
}