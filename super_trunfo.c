#include <stdio.h>
#include <string.h>

int main() {

    
    // Declaracoes carta 1:
    char estado1;
    char codigo_carta1[10];
    char nome_da_cidade1[50];
    unsigned long int populacao1;
    int numero_pontos_turisticos1;
    float area_km1;
    float pib1;
    
    // Declaracoes carta 2:
    char estado2;
    char codigo_carta2[10];
    char nome_da_cidade2[50];
    unsigned long int populacao2;
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
    scanf(" %ld", &populacao1);


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
    scanf(" %ld", &populacao2);

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


    //Calculo inverso da densidade populacional
    float inverso1;
    float inverso2;

    inverso1 = area_km1 / populacao1;
    inverso2 = area_km2 / populacao2;


    //Calculo de "super poder" das cartas

    float super_poder1;
    float super_poder2;

    super_poder1 = ((float)populacao1 + area_km1 + pib1 + 
        (float)numero_pontos_turisticos1 + pib_per_capita1 + inverso1);

    super_poder2 = ((float)populacao2 + area_km2 + pib2 + 
        (float)numero_pontos_turisticos2 + pib_per_capita2 + inverso2);

    //Comparacoes de atributos das cartas
    int comparacao_populacao;
    int comparacao_area;
    int comparacao_pib;
    int comparacao_pontos_turisticos;
    int comparacao_densidade_populacional;
    int comparacao_pib_percapita;
    int comparacao_super_poder;

    comparacao_populacao = (populacao1 > populacao2) ? 1 : 2;
    comparacao_area = (area_km1 > area_km2) ? 1 : 2;
    comparacao_pib = (pib1 > pib2) ? 1 : 2;
    comparacao_pontos_turisticos = (numero_pontos_turisticos1 > numero_pontos_turisticos2) ? 1 : 2;
    comparacao_densidade_populacional = (inverso1 > inverso2) ? 1 : 2;
    comparacao_pib_percapita = (pib_per_capita1 > pib_per_capita2) ? 1 : 2;
    comparacao_super_poder = (super_poder1 > super_poder2) ? 1 : 2;

    printf("\n");

    printf("Comparacao de cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n",comparacao_populacao, comparacao_populacao);
    printf("Area: Carta %d venceu (%d)\n", comparacao_area, comparacao_area);
    printf("PIB: Carta %d venceu (%d)\n", comparacao_pib, comparacao_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", comparacao_pontos_turisticos, comparacao_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", comparacao_densidade_populacional, inverso1 > inverso2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", comparacao_pib_percapita, comparacao_pib_percapita);
    printf("Super Poder: Carta %d venceu (%d)\n", comparacao_super_poder, comparacao_super_poder);

    return 0;
}