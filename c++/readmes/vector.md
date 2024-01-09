
# VECTOR

    é um vetor com tamanho dinamico, traz também diversas funções pra facilitar a manipulação do vetor

    algumas dessas funções são

    nome_vetor.push_back(*VALOR*); com essa função é possível adicionar valor ao vector, o valor sempre localizando a direita.

    nome_vetor.pop_back(); remove o ultimo valor a direita;

    nome_vetor.begin(), começo do vetor
    nome_vetor.end(), fim do vetor
    
    nome_vetor.size(); mostra o tamanho do vetor contando com o 0, exemplo: vetor de 3 casas [0,1,2];

    nome_vetor.resize(*TAMANHO*); colocar um tamanho estático do vetor,
    caso mude para um valor menor os numeros perdidos na subtração serão descontados na direita, exemplo:

    os valores do tamanho com resize serão obrigatoriamente 0;

    nome_vetor.resize(8);
    nome_vetor.size() = [0,0,0,0,0,0,0,0]

    nome_vetor.resize(4);
    nome_vetor.size() = [0,0,0,0];

    valores.clear(); limpa o vector

    valores.begin(); o inicio do vector; // esquerda
    valores.end(); o fim do vector // direita

    ele possibilita utilizar o for de uma forma diferente

    for( i : valores) quando a condição é desta forma ele passa o valores de valores para o i a cada iteração, exemplo:

    valores = [10,5,8]
    o i vai começar com 10, depois passar pra 5 e por fim pra 8.