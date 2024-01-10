#include <bits/stdc++.h>

using namespace std;

struct pessoa{
    int idade;
    string nome;
    double altura;
};

bool ordernar_altura(struct pessoa a, struct pessoa b){
    return a.idade > b.idade;
}

int main(){
    struct pessoa funcionario;
    funcionario.idade = 40;
    funcionario.nome = "HeriBeibe";
    funcionario.altura = 2.1;
    
    return 0;
}