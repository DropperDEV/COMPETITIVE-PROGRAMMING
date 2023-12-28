#include <bits/stdc++.h>

using namespace std;

// Piso da Escola

// O colégio pretende trocar o piso de uma sala de aula e a diretora aproveitou a oportunidade para passar uma tarefa aos alunos. A sala tem o formato de um retângulo de largura LL metros e comprimento CC metros, onde LL e CC são números inteiros. A diretora precisa comprar lajotas de cerâmica para cobrir todo o piso da sala. Seria fácil calcular quantas lajotas seriam necessárias se cada lajota fosse um quadrado de 1 metro de lado. O problema é que a lajota que a diretora quer comprar é um quadrado que possui 1 metro de diagonal, não de lado. Além disso, ela quer preencher o piso da sala com as diagonais das lajotas alinhadas aos lados da sala, como na figura.

// Figura 1

// A loja vai fornecer lajotas do tipo 1: inteiras; do tipo 2, que correspondem à metade das do tipo 1, cortadas ao longo da diagonal; e lajotas do tipo 3, que correspondem à metade do tipo 2. Veja os três tipos de lajotas na figura.

// Está muito claro que sempre serão necessárias 4 lajotas do tipo 3 para os cantos da sala. A tarefa que a diretora passou para os alunos é calcular o número de lajotas dos tipos 1 e 2 que serão necessárias. Na figura, para L=3L=3 e C=5C=5, foram necessárias 23 do tipo 1 e 12 do tipo 2.

// Seu programa precisa computar, dados os valores de LL e CC, a quantidade de lajotas do tipo 1 e do tipo 2 necessárias.
// Entrada

// A primeira linha da entrada contém um inteiro LL indicando a largura da sala. A segunda linha contém um inteiro CC representando o comprimento da sala.
// Saída

// Imprima duas linhas na saída. A primeira deve conter um inteiro, representando o número de lajotas do tipo 1 necessárias. A segunda deve conter um inteiro, indicando o número de lajotas do tipo 2.
// Restrições
// 1≤L,C≤1001≤L,C≤100


int main()
{
    long long L,C,T1,T2;
    cin >> L;
    cin >> C;
    T1 = L*C +  (L -1) * (C-1);
    T2 = ((L-1)*2)+((C-1)*2);
    cout << T1 << endl;
    cout << T2 << endl;
}