
# Struct

    um conjunto de dados que serve para padronizar tipos de dados a algo maior.

    podemos declar utilizando o struct:
    struct estrutura_pessoa{
        int idade;
        string nome;
        double peso;
        tipos...
    };

    com a estrutura criado podemos criar herdeiros desta estrutura que herdaram os tipos do pai.

    struct estrutura_pessoa jogadores;

    para adicionar um valor é estanciado um membro publico que criamos dentro da estrutura.

    jogadores.nome = "Batatinha";
    jogadores.idade = 14;
    