#include <stdio.h>

int main(){

    char Estado1;
    char codigo1[50];
    char nomeDaCidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int NumeroDePontosTuristico1;
    char Estado2;
    char codigo2[50];
    char nomeDaCidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int NumeroDePontosTuristico2;


    printf("Super Jogo!\n");
    printf("Carta 1:\n");
    printf("Digite o Estado:\n");
    scanf(" %c",&Estado1);
    printf("Digite o codigo:\n");
    scanf(" %s",codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeDaCidade1);
    printf("Digite o numero da População:\n");
    scanf(" %d",&Populacao1);
    printf("Digite a Area:\n");
    scanf(" %f",&Area1);
    printf("Digite i Pib:\n");
    scanf(" %f",&Pib1);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d",&NumeroDePontosTuristico1);

    
    printf("Carta 2:\n");
    printf("Digite o Estado:\n");
    scanf(" %c",&Estado2);
    printf("Digite o codigo:\n");
    scanf(" %s",codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeDaCidade2);
    printf("Digite o numero da População:\n");
    scanf(" %d",&Populacao2);
    printf("Digite a Area:\n");
    scanf(" %f",&Area2);
    printf("Digite i Pib:\n");
    scanf(" %f",&Pib2);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d",&NumeroDePontosTuristico2);

    printf("Carta1:\n");
    printf("Estado:%c\n",Estado1);
    printf("Codigo:%s\n",codigo1);
    printf("População:%d\n",Populacao1);
    printf("Area:%f\n",Area1);
    printf("Pib:%f\n",Pib1);
    printf("Numero de pontos Turisticos:%d\n",NumeroDePontosTuristico1);

    printf("Carta2:\n");
    printf("Estado:%c\n",Estado2);
    printf("Codigo:%s\n",codigo2);
    printf("População:%d\n",Populacao2);
    printf("Area:%f\n",Area2);
    printf("Pib:%f\n",Pib2);
    printf("Numero de pontos Turisticos:%d\n",NumeroDePontosTuristico2);

    return 0;
   
   
   
   
    

}
