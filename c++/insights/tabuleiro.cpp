#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 8;
    int tabuleiro[n][n];

    for(int i =0; i < n; i++){
        int inicio = 1;
        if (i%2 == 0){
            inicio = 0;
        }
        for (int j = 0; j < n; j++)
        {
            tabuleiro[i][j] = inicio;
            if(inicio == 1){
                inicio = 0;
            } else{
                inicio = 1;
            }
            
        }
        
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
}