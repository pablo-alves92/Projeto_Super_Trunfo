/*
 * Projeto: Super Trunfo em C.
 * Autor: Pablo Muriell Batista Alves.
 * Data de criação: 23/02/2025.
 * Última atualização: 05/03/2025.
 * Versão: 1.0
 * Descrição: Implementação do jogo Super Trunfo em linguagem C, desenvolvido para um projeto acadêmico.
 */

#include <stdio.h>

int main()
{

    // Declaração das variáveis.
    char estado1[3], estado2[3], cidade1[50], cidade2[50];
    int populacao_cd1, populacao_cd2, numero_pontos_turisticos_cd1, numero_pontos_turisticos_cd2, atributo;
    float area_cd1, area_cd2, pib_cd1, pib_cd2, densidade_populacional_cd1, densidade_populacional_cd2,
        pib_per_capita_cd1, pib_per_capita_cd2;

    // Cadastro Carta 01

    // Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 01 \n\n");
    printf("Digite a sigla que indica o Estado: \n");
    scanf(" %s", estado1);

    // Limpar o buffer de entrada
    while (getchar() != '\n')
        ;

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite a população: \n");
    scanf(" %i", &populacao_cd1);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area_cd1);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib_cd1);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos_cd1);

    // Cálculo de densidade populacional e PIB per capita.
    densidade_populacional_cd1 = populacao_cd1 / area_cd1;
    pib_per_capita_cd1 = pib_cd1 / populacao_cd1;

    // Saida de dados:
    printf("\n\n-----CARTA 01-----\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s01\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i habitantes\n", populacao_cd1);
    printf("Área: %.3f km²\n", area_cd1);
    printf("PIB: R$%.2f\n", pib_cd1);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd1);
    printf("Densidade populacional: %.2f\n", densidade_populacional_cd1);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd1);

    // Cadastro Carta 02

    // Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 02 \n\n");
    printf("Digite a sigla que indica o Estado: \n");
    scanf(" %s", estado2);

    // Limpar o buffer de entrada
    while (getchar() != '\n')
        ;

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite a população: \n");
    scanf(" %i", &populacao_cd2);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area_cd2);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib_cd2);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos_cd2);

    // Cálculo de densidade populacional e PIB per capita.
    densidade_populacional_cd2 = populacao_cd2 / area_cd2;
    pib_per_capita_cd2 = pib_cd2 / populacao_cd2;

    // Saida de dados:
    printf("\n\n-----CARTA 02-----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s01\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i habitantes\n", populacao_cd2);
    printf("Área: %.3f km²\n", area_cd2);
    printf("PIB: R$%.2f\n", pib_cd2);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd2);
    printf("Densidade populacional: %.2f\n", densidade_populacional_cd2);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd2);

    // Menu que permite a escolha de qual atributo deve ser comparado!

    printf("-----SELEÇÃO DO ATRIBUTO DE COMPARAÇÃO-----\n");    
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n\n");
    printf("Digite o número correspondente ao atributo desejado:\n");
    scanf("%i", &atributo);

    switch (atributo)
    {
    case 1:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (populacao_cd1 > populacao_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: população)\n\n");
            printf("Carta 1 - %s (%s): %i\n", cidade1, estado1, populacao_cd1);
            printf("Carta 2 - %s (%s): %i\n\n", cidade2, estado2, populacao_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: população)\n\n");
            printf("Carta 1 - %s (%s): %i\n", cidade1, estado1, populacao_cd1);
            printf("Carta 2 - %s (%s): %i\n\n", cidade2, estado2, populacao_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;
    case 2:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (area_cd1 > area_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: área)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, area_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: área)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, area_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;
    case 3:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (pib_cd1 > pib_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: PIB)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pib_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: PIB)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pib_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;
    case 4:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: Número de pontos turísticos)\n\n");
            printf("Carta 1 - %s (%s): %i\n", cidade1, estado1, numero_pontos_turisticos_cd1);
            printf("Carta 2 - %s (%s): %i\n\n", cidade2, estado2, numero_pontos_turisticos_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: Número de pontos turísticos)\n\n");
            printf("Carta 1 - %s (%s): %i\n", cidade1, estado1, numero_pontos_turisticos_cd1);
            printf("Carta 2 - %s (%s): %i\n\n", cidade2, estado2, numero_pontos_turisticos_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;
    case 5:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (densidade_populacional_cd1 > densidade_populacional_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: Densidade populacional)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade_populacional_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, densidade_populacional_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: Densidade populacional)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, densidade_populacional_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, densidade_populacional_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;
    case 6:
        // Remover o caracter de nova linha cidade2
        cidade2[strcspn(cidade2, "\n")] = '\0';
        if (pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: PIB per capita)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_per_capita_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pib_per_capita_cd2);
            printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
        }
        else
        {
            printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: PIB per capita)\n\n");
            printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_per_capita_cd1);
            printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pib_per_capita_cd2);
            printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
        }
        break;

    default:
    printf("Opção inválida!");
        break;
    }

    return 0;
}