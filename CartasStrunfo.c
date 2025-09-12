#include <stdio.h> //Inclusão da biblioteca padrão de entrada e saída.

//Desafio Super Trunfo Países

/*
Neste programa foi usado as funções scanf e printf para que o usuário defina cada atributo das cartas que serão cadastradas,
fazendo com que os dados inseridos pelo usuário sejam exibidos na tela de forma correta.

Também foram usadas variáveis do tipo char, int e float para armazenar os dados inseridos pelo usuário,
o uso de dados primitivos é essencial para o funcionamento do programa e para a organização dos dados inseridos pelo usuário,
irei trabalhar com os especificadores de formato "%s" imprime uuma cadeia de string de caracteres, "%d" imprime um inteiro no formato
e "%f" imprime um número de ponto flutuante (decimal), se necessário, podemos usar ".2" para limitar o número de casas decimais (ex: %.2f, %.3f).
*/

int main() {
    char Estado[20];
    char Código_da_Carta[20];
    char Nome_da_Cidade[50];
    int População;
    float Área;
    float PIB;
    int Número_de_Pontos_Turísticos;
    
    /*
    Int main() {}: Função principal do programa, onde o programa começa a ser executado.
    Dentro das chaves {} estão todas as instruções que o programa irá executar
    
    Usando char, int e float inserimos as variaveis presentes no programa.
    - char: utilizado para o armanezamento de caracteres (strings), como letras e símbolos.
    (Declara variavel Estado, Código da Carta e Nome da Cidade)

    - int: utilizado para o armazenamento de números inteiros.
    (Declara variavel População e Número de Pontos Turísticos)

    - float: utilizado para o armazenamento de números decimais.
    (Declara variavel Área e PIB)
    */

    
    
    printf("Bem-vindo! Neste desafio,você irá realizar o cadastro de cartas do jogo: \n");
    printf("Super Trunfo Países! \n");
    printf("De início vamos cadastrar somente duas cartas do jogo Super Trunfo Países... \n");
    printf("Está preparado? \n");
    printf("Vamos começar com a primeira carta!!! \n");
    
    /*Solicitando os dados para o usuário usando a função printf("Digite... \n"); e armazenando os dados que o usuário digitar via entrada padrão (teclado),
     usando a função scanf("%especificador", &variavel);.*/

    //Sempre utilizar \n para pular linha e melhorar a visualização do programa.
    //Não usar & em variáveis do tipo char, apenas em int e float.
    
    printf("Digite um Estado: \n");
    scanf("%s", Estado);
    printf("Agora crie o Código da sua Carta, inserindo a primeira letra do seu estado escolhido seguida de um número, por exemplo A01, B02: \n");
    scanf("%s", Código_da_Carta);
    printf("Digite o Nome de uma Cidade presente no Estado escolhido: \n");
    scanf("%s", Nome_da_Cidade);
    printf("Digite a População dessa Cidade: \n");
    scanf("%d", &População);
    printf("Digite a Área dessa Cidade (em km²): \n");
    scanf("%f", &Área);
    printf("Digite o PIB dessa Cidade (em R$): \n");
    scanf("%f", &PIB);
    printf("Informe também o Número de Pontos Turísticos dessa Cidade: \n");
    scanf("%d", &Número_de_Pontos_Turísticos);

    //Após o usuário inserir os dados, o programa irá exibir a carta criada com os dados inseridos.

    printf("PRONTO! Graças ao seus dados informados, estarei criando a sua carta.\n");
    printf("... \n");
    printf("Aqui está a sua carta: \n");
    printf("_____________________________________________________________________\n");
    printf("CARTA 1 de Código %s \n", Código_da_Carta);
    printf("Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Código_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);  
    printf("PIB: R$ %.3f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Número_de_Pontos_Turísticos);
    printf("_____________________________________________________________________\n");
    
    // Agora o programa irá solicitar os dados para a segunda carta, repetindo o processo da primeira carta.

    printf("Vamos cadastrar a segunda carta?! \n");
    printf("Agora que você já sabe como funciona, serei mais objetivo! \n");
    printf("Digite um Estado: \n");
    scanf("%s", Estado);
    printf("Digite o Código da sua Carta: \n");
    scanf("%s", Código_da_Carta);
    printf("Digite a Cidade: \n");
    scanf("%s", Nome_da_Cidade);
    printf("Digite a População dessa Cidade: \n");
    scanf("%d", &População);
    printf("Digite a Área dessa Cidade (em km²): \n");
    scanf("%f", &Área);
    printf("Digite o PIB dessa Cidade (em R$): \n");
    scanf("%f", &PIB);
    printf("Digite o Número de Pontos Turísticos dessa Cidade: \n");
    scanf("%d", &Número_de_Pontos_Turísticos);
    printf("Estou processando a sua carta... \n");
    printf("Aqui está a sua carta: \n");
    printf("_____________________________________________________________________\n");
    printf("CARTA 2 de Código %s \n", Código_da_Carta);
    printf("Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Código_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);  
    printf("PIB: R$ %.3f \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Número_de_Pontos_Turísticos);
    printf("_____________________________________________________________________\n");
    printf("Concluímos o cadastro das suas cartas! \n");
    printf("Agora é só aproveitar o game! \n");

    return 0; //Finaliza a função main, retornando o valor 0, indicando que o programa foi executado com sucesso.
}
