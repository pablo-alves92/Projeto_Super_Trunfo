/*
 * Projeto: Super Trunfo em C.
 * Autor: Pablo Muriell Batista Alves.
 * Data de criação: 23/02/2025.
 * Última atualização: 06/03/2025.
 * Versão: 1.0
 * Descrição: Implementação do jogo Super Trunfo em linguagem C, desenvolvido para um projeto acadêmico.
 */

#include <stdio.h>

int main()
{

    // Declaração das variáveis.
    char estado1[3], estado2[3], cidade1[50], cidade2[50], pais1[50], pais2[50];
    int populacao_cd1, populacao_cd2, numero_pontos_turisticos_cd1, numero_pontos_turisticos_cd2, atributo1, atributo2, area_cd1, area_cd2;
    float pib_cd1, pib_cd2, densidade_populacional_cd1, densidade_populacional_cd2, pib_per_capita_cd1, pib_per_capita_cd2, soma_atributo1, soma_atributo2;

    // Cadastro Carta 01

    // Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 01 \n\n");
    printf("Digite o nome do país: \n");
    scanf(" %s", pais1);
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
    scanf(" %i", &area_cd1);
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
    printf("Área: %i km²\n", area_cd1);
    printf("PIB: R$%.2f\n", pib_cd1);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd1);
    printf("Densidade populacional: %.2f\n", densidade_populacional_cd1);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd1);

    // Cadastro Carta 02

    // Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 02 \n\n");
    printf("Digite o nome do país: \n");
    scanf(" %s", pais2);
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
    scanf(" %i", &area_cd2);
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
    printf("Área: %i km²\n", area_cd2);
    printf("PIB: R$%.2f\n", pib_cd2);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd2);
    printf("Densidade populacional: %.2f\n", densidade_populacional_cd2);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd2);

    // Menu de seleção do primeiro atributo de comparação
    printf("-----SELEÇÃO DO PRIMEIRO ATRIBUTO DE COMPARAÇÃO-----\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n\n");
    printf("Digite o número correspondente ao atributo desejado:\n");
    scanf("%i", &atributo1);

    switch (atributo1)
    {
    case 1:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        printf("6 - PIB per capita\n\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    case 2:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("1 - População\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        printf("6 - PIB per capita\n\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    case 3:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        printf("6 - PIB per capita\n\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    case 4:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("5 - Densidade populacional\n");
        printf("6 - PIB per capita\n\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    case 5:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("6 - PIB per capita\n\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    case 6:
        // Menu de seleção do segundo atributo de comparação
        printf("\n\n-----SELEÇÃO DO SEGUNDO ATRIBUTO DE COMPARAÇÃO-----\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade populacional\n");
        printf("Digite o número correspondente ao atributo desejado:\n");
        scanf("%i", &atributo2);
        break;
    default:
        break;
    }

    // Atributos: População e Área!
    if ((atributo1 == 1 && atributo2 == 2) || (atributo1 == 2 && atributo2 == 1))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  ÁREA: %i KM²\n", cidade1, estado1, pais1, populacao_cd1, area_cd1);
        printf("Carta 2 - %s - %s - %s Atributo POPULAÇÃO: %i HABITANTES -- Atributo  ÁREA: %i KM²\n\n", cidade2, estado2, pais2, populacao_cd2, area_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = populacao_cd1 + populacao_cd2;
        soma_atributo2 = area_cd1 + area_cd2;
        printf("POPULAÇÃO: %i HABITANTES\n", soma_atributo1);
        printf("ÁREA: %.2f KM²\n\n", soma_atributo2);
        if (populacao_cd1 > populacao_cd2 && area_cd1 > area_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (populacao_cd2 > populacao_cd1 && area_cd2 > area_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: População e PIB!
    if ((atributo1 == 1 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 1))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  PIB: R$%.2f\n", cidade1, estado1, pais1, populacao_cd1, pib_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  PIB: R$%.2F\n\n", cidade2, estado2, pais2, populacao_cd2, pib_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = populacao_cd1 + populacao_cd2;
        soma_atributo2 = pib_cd1 + pib_cd2;
        printf("POPULAÇÃO: %i HABITANTES\n", soma_atributo1);
        printf("PIB: R$%.2f\n\n", soma_atributo2);
        if (populacao_cd1 > populacao_cd2 && pib_cd1 > pib_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (populacao_cd2 > populacao_cd1 && pib_cd2 > pib_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: População e Número de pontos turísticos!
    if ((atributo1 == 1 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 1))
    {
        printf("Carta 1 - %s - %s - %s - Atributo POPULAÇÃO: %i HABITANTES -- Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i\n", cidade1, estado1, pais1, populacao_cd1, numero_pontos_turisticos_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", cidade2, estado2, pais2, populacao_cd2, numero_pontos_turisticos_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = populacao_cd1 + populacao_cd2;
        soma_atributo2 = numero_pontos_turisticos_cd1 + numero_pontos_turisticos_cd2;
        printf("POPULAÇÃO: %i HABITANTES\n", soma_atributo1);
        printf("NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", soma_atributo2);
        if (populacao_cd1 > populacao_cd2 && numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (populacao_cd2 > populacao_cd1 && numero_pontos_turisticos_cd2 > numero_pontos_turisticos_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: População e Densididade populacional.
    if ((atributo1 == 1 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 1))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  DENSIDADE POPULACIONAL: %.2f\n", cidade1, estado1, pais1, populacao_cd1, densidade_populacional_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  DENSIDADE POPULACIONAL: %.2f\n\n", cidade2, estado2, pais2, populacao_cd2, densidade_populacional_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = populacao_cd1 + populacao_cd2;
        soma_atributo2 = densidade_populacional_cd1 + densidade_populacional_cd2;
        printf("POPULAÇÃO: %i HABITANTES\n", soma_atributo1);
        printf("DENSIDADE POPULACIONAL: %.2f\n\n", soma_atributo2);
        if (populacao_cd1 > populacao_cd2 && densidade_populacional_cd1 < densidade_populacional_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (populacao_cd2 > populacao_cd1 && densidade_populacional_cd2 < densidade_populacional_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: População e PIB per capita.
    if ((atributo1 == 1 && atributo2 == 6) || (atributo1 == 6 && atributo2 == 1))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  PIB PER CAPITA: R$%.2f\n", cidade1, estado1, pais1, populacao_cd1, pib_per_capita_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  POPULAÇÃO: %i HABITANTES -- Atributo  PIB PER CAPITA: R$%.2f\n\n", cidade2, estado2, pais2, populacao_cd2, pib_per_capita_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = populacao_cd1 + populacao_cd2;
        soma_atributo2 = pib_per_capita_cd1 + pib_per_capita_cd2;
        printf("POPULAÇÃO: %.f HABITANTES\n", soma_atributo1);
        printf("PIB PER CAPITA: R$%.2f\n\n", soma_atributo2);
        if (populacao_cd1 > populacao_cd2 && pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (populacao_cd2 > populacao_cd1 && pib_per_capita_cd2 > pib_per_capita_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Área e PIB.
    if ((atributo1 == 2 && atributo2 == 3) || (atributo1 == 2 && atributo2 == 3))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  ÁREA: %i HABITANTES -- Atributo  PIB : R$%.2f\n", cidade1, estado1, pais1, area_cd1, pib_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  ÁREA: %i HABITANTES -- Atributo  PIB: R$%.2f\n\n", cidade2, estado2, pais2, area_cd2, pib_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = area_cd1 + area_cd2;
        soma_atributo2 = pib_cd1 + pib_cd2;
        printf("ÁREA: %i KM²\n", soma_atributo1);
        printf("PIB: R$%.2f\n\n", soma_atributo2);
        if (area_cd1 > area_cd2 && pib_cd1 > pib_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (area_cd2 > area_cd1 && pib_cd2 > pib_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Área e Número de pontos turisticos.
    if ((atributo1 == 2 && atributo2 == 4) || (atributo1 == 2 && atributo2 == 4))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  ÁREA: %i HABITANTES -- Atributo NÚMERO DE PONTOS TURÍSTICOS: %i\n", cidade1, estado1, pais1, area_cd1, numero_pontos_turisticos_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  ÁREA: %i HABITANTES -- Atributo NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", cidade2, estado2, pais2, area_cd2, numero_pontos_turisticos_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = area_cd1 + area_cd2;
        soma_atributo2 = numero_pontos_turisticos_cd1 + numero_pontos_turisticos_cd2;
        printf("ÁREA: %i KM²\n", soma_atributo1);
        printf("NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", soma_atributo2);
        if (area_cd1 > area_cd2 && numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (area_cd2 > area_cd1 && numero_pontos_turisticos_cd2 > numero_pontos_turisticos_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Área e Densidade populacional.
    if ((atributo1 == 2 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 2))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  ÁREA: %i HABITANTES -- Atributo DENSIDADE POPULACIONAL: %.2f\n", cidade1, estado1, pais1, area_cd1, densidade_populacional_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  ÁREA: %i HABITANTES -- Atributo DENSIDADE POPULACIONAL: %.2f\n\n", cidade2, estado2, pais2, area_cd2, densidade_populacional_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = area_cd1 + area_cd2;
        soma_atributo2 = densidade_populacional_cd1 + densidade_populacional_cd2;
        printf("ÁREA: %i KM²\n", soma_atributo1);
        printf("DENSIDADE POPULACIONAL: %.2f\n\n", soma_atributo2);
        if (area_cd1 > area_cd2 && densidade_populacional_cd1 < densidade_populacional_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (area_cd2 > area_cd1 && densidade_populacional_cd2 < densidade_populacional_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Área e PIB per capita.
    if ((atributo1 == 2 && atributo2 == 6) || (atributo1 == 6 && atributo2 == 2))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  ÁREA: %i HABITANTES -- Atributo PIB PER CAPITA: R$%.2f\n", cidade1, estado1, pais1, area_cd1, pib_per_capita_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  ÁREA: %i HABITANTES -- Atributo PIB PER CAPITA: R$%.2f\n\n", cidade2, estado2, pais2, area_cd2, pib_per_capita_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = area_cd1 + area_cd2;
        soma_atributo2 = pib_per_capita_cd1 + pib_per_capita_cd2;
        printf("ÁREA: %i KM²\n", soma_atributo1);
        printf("PIB PER CAPITA: R$%.2f\n\n", soma_atributo2);
        if (area_cd1 > area_cd2 && pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (area_cd2 > area_cd1 && pib_per_capita_cd2 > pib_per_capita_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: PIB e Número de pontos turísticos.
    if ((atributo1 == 3 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 3))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  PIB: R$%.2f  -- Atributo NÚMERO DE PONTOS TURÍSTICOS: %i\n", cidade1, estado1, pais1, pib_cd1, numero_pontos_turisticos_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  PIB: R$%.2f -- Atributo NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", cidade2, estado2, pais2, pib_cd2, numero_pontos_turisticos_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = pib_cd1 + pib_cd2;
        soma_atributo2 = numero_pontos_turisticos_cd1 + numero_pontos_turisticos_cd2;
        printf("PIB: R$%.2f\n", soma_atributo1);
        printf("NÚMERO DE PONTOS TURÍSTICOS: %i\n\n", soma_atributo2);
        if (pib_cd1 > pib_cd2 && numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (pib_cd2 > pib_cd1 && numero_pontos_turisticos_cd2 > numero_pontos_turisticos_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: PIB e Densidade populacional.
    if ((atributo1 == 3 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 3))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  PIB: R$%.2f  -- Atributo DENSIDADE POPULACIONAL: %i\n", cidade1, estado1, pais1, pib_cd1, densidade_populacional_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  PIB: R$%.2f -- Atributo DENSIDADE POPULACIONAL: %i\n\n", cidade2, estado2, pais2, pib_cd2, densidade_populacional_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = pib_cd1 + pib_cd2;
        soma_atributo2 = densidade_populacional_cd1 + densidade_populacional_cd2;
        printf("PIB: R$%.2f\n", soma_atributo1);
        printf("DENSIDADE POPULACIONAL: %.2f\n\n", soma_atributo2);
        if (pib_cd1 > pib_cd2 && densidade_populacional_cd1 < densidade_populacional_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (pib_cd2 > pib_cd1 && densidade_populacional_cd2 < densidade_populacional_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: PIB e PIB per capita.
    if ((atributo1 == 3 && atributo2 == 6) || (atributo1 == 6 && atributo2 == 3))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  PIB: R$%.2f  -- Atributo PIB PER CAPITA: %.2f\n", cidade1, estado1, pais1, pib_cd1, pib_per_capita_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  PIB: R$%.2f -- Atributo PIB PER CAPITA: %.2f\n\n", cidade2, estado2, pais2, pib_cd2, pib_per_capita_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = pib_cd1 + pib_cd2;
        soma_atributo2 = pib_per_capita_cd1 + pib_per_capita_cd2;
        printf("PIB: R$%.2f\n", soma_atributo1);
        printf("PIB PER CAPITA: R$%.2f\n\n", soma_atributo2);
        if (pib_cd1 > pib_cd2 && pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (pib_cd2 > pib_cd1 && pib_per_capita_cd2 > pib_per_capita_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Número de pontos turísticos e densidade populacional.
    if ((atributo1 == 4 && atributo2 == 5) || (atributo1 == 5 && atributo2 == 4))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i  -- Atributo DENSIDADE POPULACIONAL: %.2f\n", cidade1, estado1, pais1, numero_pontos_turisticos_cd1, densidade_populacional_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i -- Atributo DENSIDADE POPULACIONAL: %.2f\n\n", cidade2, estado2, pais2, numero_pontos_turisticos_cd2, densidade_populacional_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = numero_pontos_turisticos_cd1 + numero_pontos_turisticos_cd2;
        soma_atributo2 = densidade_populacional_cd1 + densidade_populacional_cd2;
        printf("NÚMERO DE PONTOS TURÍSTICOS: %i\n", soma_atributo1);
        printf("DENSIDADE POPULACIONAL: %.2f\n\n", soma_atributo2);
        if (numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2 && densidade_populacional_cd1 < densidade_populacional_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (numero_pontos_turisticos_cd2 > numero_pontos_turisticos_cd1 && densidade_populacional_cd2 < densidade_populacional_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Número de pontos turísticos e PIB per capita.
    if ((atributo1 == 4 && atributo2 == 6) || (atributo1 == 6 && atributo2 == 4))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i  -- Atributo PIB PER CAPITA: R$%.2f\n", cidade1, estado1, pais1, numero_pontos_turisticos_cd1, pib_per_capita_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  NÚMERO DE PONTOS TURÍSTICOS: %i -- Atributo PIB PER CAPITA: R$%.2f\n\n", cidade2, estado2, pais2, numero_pontos_turisticos_cd2, pib_per_capita_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = numero_pontos_turisticos_cd1 + numero_pontos_turisticos_cd2;
        soma_atributo2 = pib_per_capita_cd1 + pib_per_capita_cd2;
        printf("NÚMERO DE PONTOS TURÍSTICOS: %i\n", soma_atributo1);
        printf("PIB PER CAPITA: R$%.2f\n\n", soma_atributo2);
        if (numero_pontos_turisticos_cd1 > numero_pontos_turisticos_cd2 && pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (numero_pontos_turisticos_cd2 > numero_pontos_turisticos_cd1 && pib_per_capita_cd2 > pib_per_capita_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    // Atributos: Densidade populacional e PIB per capita.
    if ((atributo1 == 5 && atributo2 == 6) || (atributo1 == 6 && atributo2 == 5))
    {
        printf("Carta 1 - %s - %s - %s - Atributo  DENSIDADE POPULACIONAL  %.2f  -- Atributo PIB PER CAPITA: R$%.2f\n", cidade1, estado1, pais1, densidade_populacional_cd1, pib_per_capita_cd1);
        printf("Carta 2 - %s - %s - %s Atributo  DENSIDADE POPULACIONAL  %.2f -- Atributo PIB PER CAPITA: R$%.2f\n\n", cidade2, estado2, pais2, densidade_populacional_cd2, pib_per_capita_cd2);
        printf("-----SOMA DOS ATRIBUTOS-----\n\n");
        // Soma dos atributos para  critérios de desempate!
        soma_atributo1 = densidade_populacional_cd1 + densidade_populacional_cd2;
        soma_atributo2 = pib_per_capita_cd1 + pib_per_capita_cd2;
        printf("DENSIDADE POPULACIONAL  %.2f\n", soma_atributo1);
        printf("PIB PER CAPITA: R$%.2f\n\n", soma_atributo2);
        if (densidade_populacional_cd1 > densidade_populacional_cd2 && pib_per_capita_cd1 > pib_per_capita_cd2)
        {
            printf("Carta 1 venceu!!!");
        }
        else if (densidade_populacional_cd2 > densidade_populacional_cd1 && pib_per_capita_cd2 > pib_per_capita_cd1)
        {
            printf("Carta 2 venceu!!!");
        }
        else if (soma_atributo1 > soma_atributo2)
        {
            printf("Carta 1 venceu!!!");
        }
        else
        {
            printf("Carta 2 venceu!!!");
        }
    }

    return 0;
}