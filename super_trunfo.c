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


    // Variáveis para os cálculos
 float calculardensidadePopul1;
    float resultado1 ;
    float calcularPib1 ;
    float pibPerCapita1 ;
    float calculardensidadePopul2;
    float resultado2;
    float calcularPib2 ;
    float pibPerCapita2 ;



    printf("********Super Jogo!\n**************");

    printf("Carta 1:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado1);
    printf("Digite o codigo:\n");
    scanf(" %s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeDaCidade1);
    printf("Digite o numero da População:\n");
    scanf(" %d", &Populacao1);
    printf("Digite a Area:\n");
    scanf(" %f", &Area1);
    printf("Digite i Pib:\n");
    scanf(" %f", &Pib1);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d", &NumeroDePontosTuristico1);

    // --- CARTA 1: CÁLCULOS ---
    // Calculamos logo após ler os dados da Carta 1

     calculardensidadePopul1 = Populacao1 / Area1;
     resultado1 = calculardensidadePopul1;
     calcularPib1 = Pib1 /(float) Populacao1;
     pibPerCapita1 = calcularPib1;
    
    printf("Calcule a Densidade Populacional:%.2f\n", calculardensidadePopul1);
    printf("Calcule o Pib per Capita:%.2f\n", pibPerCapita1);

    printf("Carta 2:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado2);
    printf("Digite o codigo:\n");
    scanf(" %s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeDaCidade2);
    printf("Digite o numero da População:\n");
    scanf(" %d", &Populacao2);
    printf("Digite a Area:\n");
    scanf(" %f", &Area2);
    printf("Digite i Pib:\n");
    scanf(" %f", &Pib2);
    printf("Digite o numero de pontos Turisticos:\n");
    scanf("%d", &NumeroDePontosTuristico2);

    // --- CARTA 2: CÁLCULOS ---
    // Calculamos logo após ler os dados da Carta 2

     calculardensidadePopul2 = Populacao2 / Area2;
     resultado2 = calculardensidadePopul2;
     calcularPib2 = Pib2 /(float) Populacao2;
     pibPerCapita2 = calcularPib2;

    printf("Calcule a Densidade Populacional:%.2f\n", calculardensidadePopul2);
    printf("Calcule o Pib per Capita:%.2f\n", pibPerCapita2);

    printf("Resultado obtido para esse jogo:\n");

    printf("Carta1:\n");
    printf("Estado:%c\n", Estado1);
    printf("Codigo:%s\n", codigo1);
    printf("População:%d\n", Populacao1);
    printf("Area:%f\n", Area1);
    printf("Pib:%f\n", Pib1);
    printf("Numero de pontos Turisticos:%d\n", NumeroDePontosTuristico1);
    printf("Densidade Popupacional e:%.2f\n", resultado1);
    printf("Pib per Capita e:%.2f\n", pibPerCapita1);

    printf("Carta2:\n");
    printf("Estado:%c\n", Estado2);
    printf("Codigo:%s\n", codigo2);
    printf("População:%d\n", Populacao2);
    printf("Area:%f\n", Area2);
    printf("Pib:%f\n", Pib2);
    printf("Numero de pontos Turisticos:%d\n", NumeroDePontosTuristico2);
    printf("Densidade Popupacional e:%.2f\n", resultado2);
    printf("Pib per Capita e:%.2f\n", pibPerCapita2);

    return 0;
}
   
   
    



