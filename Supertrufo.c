#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
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
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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

    int d;
    while ((d = getchar()) != '\n' && d != EOF);

    printf("Carta 2: \n");
    printf("Digite uma letra(A-H): ");
    scanf(" %c", &estado2);

    

    printf("Digite o codigo da carta(01-04): ");
    scanf(" %s", codigo_carta2);

    int y;
    while ((y = getchar()) != '\n' && y != EOF);
    
    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade2, sizeof(nome_da_cidade2), stdin);
    nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    int e;
    while ((e = getchar()) != '\n' && e != EOF);

    printf("Digite a area em km²: ");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf(" %d", &numero_pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
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

    return 0;
}
