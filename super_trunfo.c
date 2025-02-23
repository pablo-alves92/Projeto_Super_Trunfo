/*
* Projeto: Super Trunfo em C.
* Autor: Pablo Muriell Batista Alves.
* Data de criação: 23/02/2025.
* Última atualização: 23/02/2025.
* Versão: 1.0
* Descrição: Implementação do jogo Super Trunfo em linguagem C, desenvolvido para um projeto acadêmico. 
*/

#include <stdio.h>

int main(){

    //Declaração das variáveis. 
    char estado;    
    char cidade[20];
    int populacao, numero_pontos_turisticos;
    float area, pib;

    //Cadastro Carta 01
    
    //Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 01 \n\n");
    printf("Digite a letra que indica o Estado: \n");
    scanf(" %c", &estado);    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);
    printf("Digite a população: \n");
    scanf(" %i", &populacao);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos);

    //Saida de dados:
    printf("\n\n-----CARTA 01-----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c01\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %i habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: R$%.3f\n", pib);
    printf("Número de pontos turísticos: %i\n\n ", numero_pontos_turisticos);  

    
    //Cadastro Carta 02
    
    //Entrada de dados
    printf("----- CADASTRO DE CARTAS -----\n");
    printf("* CADASTRO CARTA 02 \n\n");
    printf("Digite a letra que indica o Estado: \n");
    scanf(" %c", &estado);    
    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);
    printf("Digite a população: \n");
    scanf(" %i", &populacao);
    printf("Digite a área (em KM²): \n");
    scanf(" %f", &area);
    printf("Digite o PIB: \n");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos: \n");
    scanf(" %i", &numero_pontos_turisticos);

    //Saida de dados:
    printf("\n\n-----CARTA 02-----\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c02\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %i habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: R$%.3f\n", pib);
    printf("Número de pontos turísticos: %i ", numero_pontos_turisticos);  


   
return 0;

}