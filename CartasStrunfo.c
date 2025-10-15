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
    float Densidade_Populacional;
    float PIB_per_Capita;
    /*
    Int main() {}: Função principal do programa, onde o programa começa a ser executado.
    Dentro das chaves {} estão todas as instruções que o programa irá executar
    
    Usando char, int e float inserimos as variaveis presentes no programa.
    - char: utilizado para o armanezamento de caracteres (strings), como letras e símbolos.
    (Declara variavel Estado, Código da Carta e Nome da Cidade)

    - int: utilizado para o armazenamento de números inteiros.
    (Declara variavel População e Número de Pontos Turísticos)

    - float: utilizado para o armazenamento de números decimais.
    (Declara variavel Área, PIB, Densidade Populacional e PIB per Capita)
    */

    
    
    printf("Bem-vindo! Neste desafio,você irá realizar o cadastro de cartas do jogo: \n");
    printf("Super Trunfo Países! \n\n\n");
    printf("De início vamos cadastrar somente duas cartas do jogo Super Trunfo Países... \n");
    printf("Está preparado? \n\n\n");
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
    printf("Digite o PIB dessa Cidade (em bilhões): \n");
    scanf("%f", &PIB);
    printf("Informe também o Número de Pontos Turísticos dessa Cidade: \n");
    scanf("%d", &Número_de_Pontos_Turísticos);

    //Após o usuário inserir os dados, será realizado o calculo para obtermos a Densidade Populacional e PIB per Capita.
    //Use cast explicito (float) para garantir que a divisão seja feita em ponto flutuante, evitando perda de precisão.
    //Utilizando (PIB * 1000000000) é possivél converter o PIB de bilhões para reais, garantindo que o cálculo do PIB per Capita seja preciso.

    Densidade_Populacional = População / Área; // Cálculo da Densidade Populacional (População dividido pela Área).
    PIB_per_Capita = (float) (PIB * 1000000000) / População; // Cálculo do PIB per Capita (PIB dividido pela População).

    // Por fim, o programa irá exibir os dados inseridos pelo usuário e os cálculos realizados.
    printf("PRONTO! Graças ao seus dados informados, estarei criando a sua carta.\n");
    printf("... \n");
    printf("Aqui está a sua carta: \n\n");
    printf("_____________________________________________________________________\n");
    printf("CARTA 1 de Código %s \n", Código_da_Carta);
    printf("Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Código_da_Carta);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);  
    printf("PIB: R$ %.3f bilhões \n", PIB);
    printf("Número de Pontos Turísticos: %d \n", Número_de_Pontos_Turísticos);
    
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional);
    printf("PIB per Capita: %.2f \n", PIB_per_Capita);
    printf("_____________________________________________________________________\n");
    
    // Agora o programa irá solicitar os dados para a segunda carta, repetindo o processo da primeira carta.
    
     /*
    Note que as variáveis da segunda carta possuem o número 2 no final do nome, para diferenciar das variáveis da primeira carta, isso é necessário 
    para evitar conflitos entre as variáveis e garantir que cada carta tenha seus próprios atributos.
    */
    char Estado2[20];
    char Código_da_Carta2[20];
    char Nome_da_Cidade2[50];
    int População2;
    float Área2;
    float PIB2;
    int Número_de_Pontos_Turísticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
    

    printf("Vamos cadastrar a segunda carta?! \n");
    printf("Agora que você já sabe como funciona, serei mais objetivo! \n\n");
    printf("Digite um Estado: \n");
    scanf("%s", Estado2);
    printf("Digite o Código da sua Carta: \n");
    scanf("%s", Código_da_Carta2);
    printf("Digite a Cidade: \n");
    scanf("%s", Nome_da_Cidade2);
    printf("Digite a População dessa Cidade: \n");
    scanf("%d", &População2);
    printf("Digite a Área dessa Cidade (em km²): \n");
    scanf("%f", &Área2);
    printf("Digite o PIB dessa Cidade (em bilhões): \n");
    scanf("%f", &PIB2);
    printf("Digite o Número de Pontos Turísticos dessa Cidade: \n");
    scanf("%d", &Número_de_Pontos_Turísticos2);
    
    //Hora de realizar os cálculos das variáveis Densidade Populacional e PIB per Capita da segunda carta fazendo o mesmo processo da primeira carta.
    Densidade_Populacional2 = População2 / Área2;
    PIB_per_Capita2 = (float) (PIB2 * 1000000000) / População2;

    printf("Estou processando a sua carta... \n");
    printf("Aqui está a sua carta: \n\n");
    printf("_____________________________________________________________________\n");
    printf("CARTA 2 de Código %s \n", Código_da_Carta2);
    printf("Estado: %s \n", Estado2);
    printf("Código da Carta: %s \n", Código_da_Carta2);
    printf("Nome da Cidade: %s \n", Nome_da_Cidade2);
    printf("População: %d \n", População2);
    printf("Área: %.2f km² \n", Área2);  
    printf("PIB: R$ %.2f bilhões \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", Número_de_Pontos_Turísticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional2);
    printf("PIB per Capita: %.2f \n", PIB_per_Capita2);
    printf("_____________________________________________________________________\n");
    printf("Concluímos o cadastro das suas cartas! \n");
    printf("Agora é só aproveitar o game! \n");

    return 0; //Finaliza a função main, retornando o valor 0, indicando que o programa foi executado com sucesso.
}
