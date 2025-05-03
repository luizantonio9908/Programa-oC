#include <stdio.h>


    int main (){
    // Declarando variáveis
    char estado1[20], estado2[20];
    char cod_carta[20], cod_carta2[20];
    char nome_cidade[20], nome_cidade2[20];
    int populacao, populacao2;
    float area, pib, area2, pib2;
    int ponto_turistico, ponto_turistico2;
    float densidade1, per_capita1, densidade2, per_capita2;
    float super_poder1, super_poder2;

    // criando variaveis para os resultados das comparações 
    int result_popu, result_pturistico;
    float result_area, result_pib, result_densidade, result_percapta, result_super;
    
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

    densidade1 = populacao/area;
    per_capita1 = pib/populacao;
    
    super_poder1 = (populacao+area+pib+per_capita1+ (1/densidade1) + ponto_turistico);
    
    // Mostrando o Resultado da carta 
    printf("CARTA 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s\n" ,cod_carta);
    printf("Nome da Cidade: %s\n" ,nome_cidade);
    printf("População: %d\n" ,populacao);
    printf("Área: %f km²\n" ,area);
    printf("PIB: %f bilhões de reais\n" ,pib);
    printf("Número de Pontos Turisticos: %d\n" ,ponto_turistico);
    printf("A densidade é igual a: %f hab/km² \n" ,densidade1);
    printf("O PIB per capita é igual a: %f reais \n" ,per_capita1);
    printf("O valor da carta do super poder 1 é: %f \n" ,super_poder1);


    // Começar a interação com usuários da carta 02
    printf("---------------------------------------------------\n");
    printf("Agora vamos para a carta dois: \n");
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

    densidade2 = populacao2/area2;
    per_capita2 = pib2/populacao2;

    super_poder2 = (populacao2 + area2 + pib2 + per_capita2 + (1/densidade2) + ponto_turistico2);
    
    // Mostrando o Resultado da carta 
    printf("CARTA 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s\n" ,cod_carta2);
    printf("Nome da Cidade: %s\n" ,nome_cidade2);
    printf("População: %d\n" ,populacao2);
    printf("Área: %f km²\n" ,area2);
    printf("PIB: %f bilhões de reais\n" ,pib2);
    printf("Número de Pontos Turisticos: %d\n" ,ponto_turistico2);
    printf("A densidade é igual a: %f hab/km² \n" ,densidade2);
    printf("O PIB per capita é igual a: %f reais \n" ,per_capita2);
    printf("O valor da carta do super poder dois é: %f \n" ,super_poder2);

    // Atribuindo todos os operações de maior e menos em suas respectivas variáveis        
    result_popu = populacao2>populacao2;
    result_area = area>area2;
    result_pib = pib>pib2;
    result_pturistico = ponto_turistico>ponto_turistico2;
    result_densidade = densidade1<densidade2;
    result_percapta = per_capita1>per_capita2;
    result_super = super_poder1>super_poder2;


    printf("------------------------------------------------------------\n");
    // mostrando o reultado final do jogo

    printf(" A Carta 1 venceu na população: %d \n" , result_popu);
    printf(" A Carta 2 venceu na área total: %f \asd,result_area);
    printf(" A Carta 1 venceu no PIB: %f: \n" , result_pib);
    printf(" A Carta 2 venxeu na quantidade de pontos turisticos: %d \n" ,result_pturistico);
    printf(" A Carta 1 venceu da densidade populacional: %f \n" , result_densidade);
    printf(" A Carta 2 vendeu no PIB Per capta: %f \n" ,result_percapta);
    printf(" A Carta 1 venceu a carta dois? %f \n" , result_super);



    return 0;
}