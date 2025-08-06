#include <stdio.h>
#include <string.h>

int main() {

    
    // Declaracoes carta 1:
    char estado1;
    char codigo_carta1[10];
    char nome_da_cidade1[50];
    int populacao1;
    int numero_pontos_turisticos1;
    float area_km1;
    float pib1;
    
    // Declaracoes carta 2:
    char estado2;
    char codigo_carta2[10];
    char nome_da_cidade2[50];
    int populacao2;
    int numero_pontos_turisticos2;
    float area_km2;
    float pib2;
    
    //Cadastro carta 1:
    printf("Carta 1: \n");
    printf("Digite uma letra(A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta(01-04): ");
    scanf(" %s", codigo_carta1);

    // Limpeza de buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade1, sizeof(nome_da_cidade1), stdin);
    nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);


    printf("Digite a area em km²: ");
    scanf(" %f", &area_km1);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos1);

    //Cadastro carta 2:

    // Limpeza de buffer
    int d;
    while ((d = getchar()) != '\n' && d != EOF);

    printf("Carta 2: \n");
    printf("Digite uma letra(A-H): ");
    scanf(" %c", &estado2);

    

    printf("Digite o codigo da carta(01-04): ");
    scanf(" %s", codigo_carta2);

    // Limpeza de buffer
    int y;
    while ((y = getchar()) != '\n' && y != EOF);
    
    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    // Limpeza de buffer
    // Nao sei porque sem essa limpeza o codigo esta quebrando mesmo lendo somente numeros
    int e;
    while ((e = getchar()) != '\n' && e != EOF);

    printf("Digite a area em km²: ");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos2);

    // Calculo Densidade populacional:

    float densidade_populacional1;
    float densidade_populacional2;

    densidade_populacional1 = populacao1 / area_km1;
    densidade_populacional2 = populacao2 / area_km2;

    // Calculo PIB per capita:

    float pib_per_capita1;
    float pib_per_capita2;

    //Fiz o pib multiplicado por bilhao parea resolver problema de estar fazendo as contas
    //Com numeros curtos. com numero curtos sempre dava zero como resultado.

    pib_per_capita1 = pib1 * 1000000000 / populacao1; 
    pib_per_capita2 = pib2 * 1000000000 / populacao2;  

    //Exibicao das cartas
    printf("\n");
    printf("Carta 1: \n");
    printf("\n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area_km1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n");
    printf("Carta 2: \n");
    printf("\n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area_km2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
