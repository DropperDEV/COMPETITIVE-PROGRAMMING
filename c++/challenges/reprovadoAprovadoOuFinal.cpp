#include <bits/stdc++.h>

using namespace std;

// Reprovado, Aprovado ou Final.

// Bino obteve média N1N1​ na primeira etapa do semestre e média N2N2​ na segunda etapa do semestre. Bino não sabe sua situação e quer sua ajuda para saber se ele está aprovado, reprovado ou de prova final.

// A nota final de Bino é calculada utilizando uma média ponderada onde o peso da N1N1​ é 2 e o peso da N2N2​ é 3. Caso a média final seja maior ou igual a 7, Bino está aprovado. Caso a média seja menor que 3, Bino está reprovado. Caso Bino não esteja reprovado ou aprovado, Bino terá que fazer a prova final.

// Faça um programa para ler as duas notas de Bino e imprima qual sua situação.
// Entrada

// A entrada consiste de duas linhas. A primeira linha contém um real representando a nota N1N1​. A segunda linha contém um real representando a nota N2N2​.
// Saída

// A saída consiste de uma linha. Caso Bino esteja aprovado, imprima "Aprovado". Caso Bino esteja reprovado, imprima "Reprovado". Caso Bino não esteja reprovado ou aprovado, imprima "Final".
// Restrições

//     0.0≤N1,N2≤10.00.0≤N1​,N2​≤10.0

int main(){
   int n,m;
   cin >> n;
   cin >> m;
    if(((n*2)+(m*3))/5 >= 7) cout << "Aprovado";
    else if(((n*2)+(m*3))/5 < 3) cout << "Reprovado";
    else cout << "Final";

    return 0;
}