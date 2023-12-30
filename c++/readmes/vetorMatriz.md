
# Vetores


    int salario[valor];

    acessar com salario[index];
    salario[0]
    salario[1]

    você deve declarar uma vetor dessa forma 
>tipo vetor[coluna];

    para adicionar valor a um vetor é necessário usar for,
    desta forma é possível:

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    
    desta forma é possivel entender que o vetor está adicionando valor a um indice que é gerado pelo for, no indice 0 é adicionado valor, até o fim do loop.


# Matrizes

    matrizes são vetores com multi dimensões, possui linha e coluna enquanto o vetor somente possui linha.

    você deve declarar uma matriz dessa forma 
>tipo matriz[linhas][colunas];

    para adicionar valor é da mesma forma do vetor, oque interfere é que você terá que adicionar linhas e colunas, logo no vetor usamos um for para demarcar o indicie da coluna, aqui não é diferente precisamos de dois for um para a linha e um para a coluna.

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
             cin >> vetor[i][j];
        }
    }