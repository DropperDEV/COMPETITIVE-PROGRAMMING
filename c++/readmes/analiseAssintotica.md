
# Análise assintótica

    estudo de tempo para executar um algoritimo, levando em consideração as entrada para entender o crescimento exponencial da execução de um algoritmo.

    temos o 
>O(tempo)

    usamos levando em consideração a quantidade de funções de repetições que ocorre e se é em cadeia.

    por exemplo:

    for(int i = 0; i < n; i++){
        // codigo //
    }

    aqui temos uma função com tempo de execucação O(n), o crescimento dela é bem continuo não ocorre mudanças relevantes.

     for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
        

         }
    }

    já nesse código temos um tempo O(n^2), já que a cada nested loop (loop aninhado) causa um tempo maior de execução.

     for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
        

         }
    }
     for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
        

         }
    }

    neste ultimo o tempo é O(n^2), a quantidade de nested loops é relevante somente dentro do loop principal.

    
     for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
        

         }
    }
     for(int i = 0; i < n; i++){

         for(int i = 0; i < n; i++){

            for(int i = 0; i < n; i++){
        

            }

         }
    }
     for(int i = 0; i < n; i++){
         for(int i = 0; i < n; i++){
        

         }
    }

    nesse ultimo o tempo é O(n^3), leva em consideração o maior nested loop.