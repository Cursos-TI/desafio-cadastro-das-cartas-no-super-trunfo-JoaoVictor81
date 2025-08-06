
/*
        desafio nivel novato
*/
#include <stdio.h>
int main()
{
    //variaveis da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    //variaveis da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;


    printf("----------------------\n");
    printf("-----Super Trunfo-----\n");
    printf("----------------------\n");
    printf("crie as cartas\n");

    //criando primera carta
    printf("carta 1 \n");
    printf("estado: ");
    scanf("%c",&estado1);
    printf("codigo da carta: ");
    scanf("%s",codigo1);
    printf("cidade: ");
    scanf("%s",cidade1);
    printf("populacao: ");
    scanf("%d",&populacao1);
    printf("area (em km2): ");
    scanf("%f",&area1);
    printf("PIB: ");
    scanf("%f",&PIB1);
    printf("numero de pontos turisticos: ");
    scanf("%d",&pontos_turisticos1);
    printf("\n\n");
    
    //mostra a carta criada
    printf("-------carta 1------- \n");
    printf("estado: %c \n",estado1);
    printf("codigo: %s \n",codigo1);
    printf("nome da cidade: %s \n",cidade1);
    printf("populacao: %d \n",populacao1);
    printf("area: %.2f km2 \n",area1);
    printf("PIB: %.2f bilhoes de reais \n",PIB1);
    printf("numero de pontos turisticos: %d \n",pontos_turisticos1);
    printf("\n\n");

    //criando a segunda carta
    printf("carta 2 \n");
    printf("estado: ");
    scanf(" %c",&estado2);
    printf("codigo da carta: ");
    scanf("%s",codigo2);
    printf("cidade: ");
    scanf("%s",cidade2);
    printf("populacao: ");
    scanf("%d",&populacao2);
    printf("area (em km2): ");
    scanf("%f",&area2);
    printf("PIB: ");
    scanf("%f",&PIB2);
    printf("numero de pontos turisticos: ");
    scanf("%d",&pontos_turisticos2);
    printf("\n\n");

    //mostra a carta criada
    printf("-------carta 2------- \n");
    printf("estado: %c \n",estado2);
    printf("codigo: %s \n",codigo2);
    printf("nome da cidade: %s \n",cidade2);
    printf("populacao: %d \n",populacao2);
    printf("area: %.2f km2 \n",area2);
    printf("PIB: %.2f bilhoes de reais \n",PIB2);
    printf("numero de pontos turisticos: %d \n",pontos_turisticos2);


return 0;
    
}
