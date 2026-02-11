#include <stdio.h>


   

int main()
{

    char Estado1;
    char codigo1[50];
    char nomeDaCidade1[50];
    unsigned long int Populacao1;
    float Area1;
    float Pib1;
    int NumeroDePontosTuristico1;

    char Estado2;
    char codigo2[50];
    char nomeDaCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float Pib2;
    int NumeroDePontosTuristico2;

    // Variáveis para os cálculos
    float calculardensidadePopul1;
    float resultado1;
    float calcularPib1;
    float pibPerCapita1;
    float superPoder1;

    float calculardensidadePopul2;
    float resultado2;
    float calcularPib2;
    float pibPerCapita2;
    float superPoder2;

    int opcao;

    printf("********Super Jogo!\n**************");

    printf("Carta 1:\n");
    printf("Digite o Estado:\n");
    scanf(" %c", &Estado1);
    printf("Digite o codigo:\n");
    scanf(" %s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nomeDaCidade1);
    printf("Digite o numero da População:\n");
    scanf(" %lu", &Populacao1);
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
    calcularPib1 = Pib1 / (float)Populacao1;
    pibPerCapita1 = calcularPib1;
    superPoder1 = (float)Populacao1 + Area1 + Pib1 + (float)NumeroDePontosTuristico1 + pibPerCapita1 + (1.f / calculardensidadePopul1);

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
    scanf(" %lu", &Populacao2);
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
    calcularPib2 = Pib2 / (float)Populacao2;
    pibPerCapita2 = calcularPib2;
    superPoder2 = (float)Populacao2 + Area2 + Pib2 + (float)NumeroDePontosTuristico2 + pibPerCapita2 + (1.f / calculardensidadePopul2);

    printf("Calcule a Densidade Populacional:%.2f\n", calculardensidadePopul2);
    printf("Calcule o Pib per Capita:%.2f\n", pibPerCapita2);

    printf("Resultado obtido para esse jogo:\n");

    printf("Carta1:\n");
    printf("Estado:%c\n", Estado1);
    printf("Codigo:%s\n", codigo1);
    printf("População:%lu\n", Populacao1);
    printf("Area:%f\n", Area1);
    printf("Pib:%f\n", Pib1);
    printf("Numero de pontos Turisticos:%d\n", NumeroDePontosTuristico1);
    printf("Densidade Popupacional e:%.2f\n", resultado1);
    printf("Pib per Capita e:%.2f\n", pibPerCapita1);

    printf("Carta2:\n");
    printf("Estado:%c\n", Estado2);
    printf("Codigo:%s\n", codigo2);
    printf("População:%lu\n", Populacao2);
    printf("Area:%f\n", Area2);
    printf("Pib:%f\n", Pib2);
    printf("Numero de pontos Turisticos:%d\n", NumeroDePontosTuristico2);
    printf("Densidade Popupacional e:%.2f\n", resultado2);
    printf("Pib per Capita e:%.2f\n", pibPerCapita2);

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n--- Resultado obtido ---\n");
    printf("Carta 1 - %s: Super Poder = %.2f\n", nomeDaCidade1, superPoder1);
    printf("Carta 2 - %s: Super Poder = %.2f\n", nomeDaCidade2, superPoder2);

    printf("\n--- RESULTADO DAS COMPARACOES (1: Carta 1 vence | 0: Carta 2 vence) ---\n");

    // Comparação de População (Maior vence)
    printf("Populacao: %lu\n", Populacao1 > Populacao2);

    // Comparação de Area (Maior vence)
    printf("Area: %d\n", Area1 > Area2);

    // Comparação de PIB (Maior vence)
    printf("PIB: %d\n", Pib1 > Pib2);

    // Comparação de Pontos Turísticos (Maior vence)
    printf("Pontos Turisticos: %d\n", NumeroDePontosTuristico1 > NumeroDePontosTuristico2);

    // Comparação de Densidade Populacional (MENOR vence)

    printf("Densidade Populacional: %lu\n", resultado1 < resultado2);

    // Comparação de PIB per Capita (Maior vence)
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);

    // Comparação de Super Poder (Maior vence)
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    if (Populacao1 > Populacao2)
    {

        printf("Carta 1 é o vencedor! \n");
        
    } else{
        printf("Carta 2 é o ganhador!\n");
    }  

    // --- INÍCIO DA IMPLEMENTAÇÃO DO MENU (SWITCH) ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1: // População
            printf("\nAtributo: População\n");
            printf("%s: %lu\n", nomeDaCidade1, Populacao1);
            printf("%s: %lu\n", nomeDaCidade2, Populacao2);
            if (Populacao1 > Populacao2) {
                printf("Vencedor: %s\n", nomeDaCidade1);
            } else if (Populacao2 > Populacao1) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nAtributo: Área\n");
            printf("%s: %.2f\n", nomeDaCidade1, Area1);
            printf("%s: %.2f\n", nomeDaCidade2, Area2);
            if (Area1 > Area2) {
                printf("Vencedor: %s\n", nomeDaCidade1);
            } else if (Area2 > Area1) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f\n", nomeDaCidade1, Pib1);
            printf("%s: %.2f\n", nomeDaCidade2, Pib2);
            if (Pib1 > Pib2) {
                printf("Vencedor: %s\n", nomeDaCidade1);
            } else if (Pib2 > Pib1) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d\n", nomeDaCidade1, NumeroDePontosTuristico1);
            printf("%s: %d\n", nomeDaCidade2, NumeroDePontosTuristico2);
            if (NumeroDePontosTuristico1 > NumeroDePontosTuristico2) {
                printf("Vencedor: %s\n", nomeDaCidade1);
            } else if (NumeroDePontosTuristico2 > NumeroDePontosTuristico1) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (MENOR VENCE)
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", nomeDaCidade1, resultado1);
            printf("%s: %.2f\n", nomeDaCidade2, resultado2);
            if (resultado1 < resultado2) { // Regra invertida
                printf("Vencedor: %s\n", nomeDaCidade1);
            } else if (resultado2 < resultado1) {
                printf("Vencedor: %s\n", nomeDaCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida!\n");
            break;
    }

        return 0;
    
}


