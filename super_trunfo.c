/*
* Projeto: Super Trunfo em C.
* Autor: Pablo Muriell Batista Alves.
* Data de criação: 23/02/2025.
* Última atualização: 25/02/2025.
* Versão: 1.0
* Descrição: Implementação do jogo Super Trunfo em linguagem C, desenvolvido para um projeto acadêmico. 
*/

#include <stdio.h>


int main(){    

    //Declaração das variáveis. 
    char estado1[3], estado2[3];    
    char cidade1[50], cidade2[50];
    int populacao_cd1,populacao_cd2, numero_pontos_turisticos_cd1,numero_pontos_turisticos_cd2;
    float area_cd1,area_cd2, pib_cd1, pib_cd2;
    float densidade_populacional_cd1,densidade_populacional_cd2, pib_per_capita_cd1,pib_per_capita_cd2;

    //Cadastro Carta 01
    
    //Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 01 \n\n");
    printf("Digite a sigla que indica o Estado: \n");
    scanf(" %s", estado1);
    
    //Limpar o buffer de entrada
    while (getchar() != '\n');

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin); 
    cidade1[strcspn(cidade1, "\n")] =0;
    printf("Digite a população: \n");
    scanf(" %i", &populacao_cd1);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area_cd1);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib_cd1);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos_cd1);

    //Cálculo de densidade populacional e PIB per capita. 
    densidade_populacional_cd1 = populacao_cd1 / area_cd1;
    pib_per_capita_cd1 = pib_cd1 / populacao_cd1;

    //Saida de dados:
    printf("\n\n-----CARTA 01-----\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s01\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %i habitantes\n", populacao_cd1);
    printf("Área: %.3f km²\n", area_cd1);
    printf("PIB: R$%.2f\n", pib_cd1);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd1);
    printf("Densidade populacional: %.2f\n",densidade_populacional_cd1);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd1);
    
    //Cadastro Carta 02
    
    //Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 02 \n\n");
    printf("Digite a sigla que indica o Estado: \n");
    scanf(" %s", estado2); 

    //Limpar o buffer de entrada
    while (getchar() != '\n');
       
    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin); 
    cidade2[strcspn(cidade2, "\n")] =0;
    printf("Digite a população: \n");
    scanf(" %i", &populacao_cd2);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area_cd2);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib_cd2);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos_cd2);

    //Cálculo de densidade populacional e PIB per capita. 
    densidade_populacional_cd2 = populacao_cd2 / area_cd2;
    pib_per_capita_cd2 = pib_cd2 / populacao_cd2;

    //Saida de dados:
    printf("\n\n-----CARTA 02-----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s01\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %i habitantes\n", populacao_cd2);
    printf("Área: %.3f km²\n", area_cd2);
    printf("PIB: R$%.2f\n", pib_cd2);
    printf("Número de pontos turísticos: %i\n", numero_pontos_turisticos_cd2); 
    printf("Densidade populacional: %.2f\n",densidade_populacional_cd2);
    printf("PIB per capita: R$%.2f\n\n", pib_per_capita_cd2);
    
    /* 
       Escolha do atributo de comparação, população.area_cd1
       Definição das saídas de dados. 
     */

    //Remover o caracter de nova linha cidade2
     cidade2[strcspn(cidade2, "\n")] = '\0';

    if(populacao_cd1 > populacao_cd2){        
        printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: população)\n\n");
        printf("Carta 1 - %s (%s): %i\n",cidade1,estado1, populacao_cd1);
        printf("Carta 2 - %s (%s): %i\n\n",cidade2,estado2, populacao_cd2);
        printf("Resultado: Carta 1 (%s) VENCEU!", cidade1);
    } else {
        printf("-----COMPARAÇÃO DE CARTAS----- (Atributo: população)\n\n");
        printf("Carta 1 - %s (%s): %i\n",cidade1,estado1, populacao_cd1);
        printf("Carta 2 - %s (%s): %i\n\n",cidade2,estado2, populacao_cd2);
        printf("Resultado: Carta 2 (%s) VENCEU!", cidade2);
    }
return 0;

}