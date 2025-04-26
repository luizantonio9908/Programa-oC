#include <stdio.h>


    int main (){
    // Declarando variáveis
    char estado1[20], estado2[20];
    char cod_carta[20], cod_carta2[20];
    char nome_cidade[20], nome_cidade2[20];
    int populacao, populacao2;
    float area, pib, area2, pib2;
    int ponto_turistico, ponto_turistico2;
    
    // Começar a interação com usuários da carta 01 
    printf("BEM VINDOS AO SUPER TRUNFO \n");
    printf("Cara 01 do JOGO\n");
    // Perguntando qual o estado do cliente
    printf("Qual estado? \n");
    scanf("%s" , estado1);
    
    // Perguntando o código da cidade
    printf("Qual o codigo referente a cidade? \n");
    scanf("%s" ,cod_carta);

    // Perguntando o nome da cidade ao usuário
    printf("Qual cidade gostaria de selecionar? \n");
    scanf("%s" ,nome_cidade);

    // Perguntando a população ao usuário
    printf("Qual a população da cidade? \n");
    scanf("%d" ,&populacao);

    // Perguntando qual a área total 
    printf("Qual área total em km²? \n ");
    scanf("%f" ,&area);

    // Perguntando qual o PIB daquela localização
    printf("Qual o PIB (Produto Interno Bruto) da localidade? \n");
    scanf("%f", &pib);

    // Perguntando quantos pontos turisticos há naquela região
    printf("Há quantos pontos turisticos em %s? \n" ,nome_cidade);  
    scanf("%d" ,&ponto_turistico);
    
    // Mostrando o Resultado da carta 
    printf("CARTA 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s\n" ,cod_carta);
    printf("Nome da Cidade: %s\n" ,nome_cidade);
    printf("População: %d\n" ,populacao);
    printf("Área: %f km²\n" ,area);
    printf("PIB: %f bilhões de reais\n" ,pib);
    printf("Número de Pontos Turisticos: %d\n" ,ponto_turistico);

    
    // Começar a interação com usuários da carta 02
    printf("Cara 02 do JOGO\n");

    // Perguntando qual o estado do cliente
    printf("Qual estado? \n");
    scanf("%s" , estado2);
    
    // Perguntando o código da cidade
    printf("Qual o codigo referente a cidade? \n");
    scanf("%s" ,cod_carta2);

    // Perguntando o nome da cidade ao usuário
    printf("Qual cidade gostaria de selecionar? \n");
    scanf("%s" ,nome_cidade2);

    // Perguntando a população ao usuário
    printf("Qual a população da cidade? \n");
    scanf("%d" ,&populacao2);

    // Perguntando qual a área total 
    printf("Qual área total em km²? \n ");
    scanf("%f" ,&area2);

    // Perguntando qual o PIB daquela localização
    printf("Qual o PIB (Produto Interno Bruto) da localidade? \n");
    scanf("%f", &pib2);

    // Perguntando quantos pontos turisticos há naquela região
    printf("Há quantos pontos turisticos em %s? \n" ,nome_cidade);  
    scanf("%d" ,&ponto_turistico2);
    
    // Mostrando o Resultado da carta 
    printf("CARTA 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s\n" ,cod_carta2);
    printf("Nome da Cidade: %s\n" ,nome_cidade2);
    printf("População: %d\n" ,populacao2);
    printf("Área: %f km²\n" ,area2);
    printf("PIB: %f bilhões de reais\n" ,pib2);
    printf("Número de Pontos Turisticos: %d\n" ,ponto_turistico2);
    
    return 0;
}