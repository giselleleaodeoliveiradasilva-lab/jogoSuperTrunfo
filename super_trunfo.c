#include <stdio.h>

int main()
{
    // --- SUAS VARIÁVEIS ORIGINAIS ---
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

    // --- NOVAS VARIÁVEIS DO NÍVEL MESTRE (Adicionadas aqui) ---
    int opcao2;
    float valor1_C1, valor1_C2, valor2_C1, valor2_C2;
    float somaC1, somaC2;

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
    printf("Populacao: %d\n", Populacao1 > Populacao2);
    printf("Area: %d\n", Area1 > Area2);
    printf("PIB: %d\n", Pib1 > Pib2);
    printf("Pontos Turisticos: %d\n", NumeroDePontosTuristico1 > NumeroDePontosTuristico2);
    printf("Densidade Populacional: %d\n", resultado1 < resultado2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    if (Populacao1 > Populacao2)
    {
        printf("Carta 1 é o vencedor! \n");
    } else {
        printf("Carta 2 é o ganhador!\n");
    }

    // --- INÍCIO DA IMPLEMENTAÇÃO DO MENU (SWITCH) ---
    // [Seu Switch Original foi adaptado para salvar os valores para a soma posterior]
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("\nAtributo 1: População\n");
            valor1_C1 = (float)Populacao1;
            valor1_C2 = (float)Populacao2;
            break;
        case 2:
            printf("\nAtributo 1: Área\n");
            valor1_C1 = Area1;
            valor1_C2 = Area2;
            break;
        case 3:
            printf("\nAtributo 1: PIB\n");
            valor1_C1 = Pib1;
            valor1_C2 = Pib2;
            break;
        case 4:
            printf("\nAtributo 1: Pontos Turísticos\n");
            valor1_C1 = (float)NumeroDePontosTuristico1;
            valor1_C2 = (float)NumeroDePontosTuristico2;
            break;
        case 5:
            printf("\nAtributo 1: Densidade Demográfica\n");
            valor1_C1 = resultado1;
            valor1_C2 = resultado2;
            break;
        default:
            printf("\nOpção inválida!\n");
            return 0;
    }

    // --- NOVO MENU DINÂMICO (Nível Mestre) ---
    printf("\nEscolha o SEGUNDO atributo (não pode ser o mesmo):\n");
    if (opcao != 1) printf("1 - População\n");
    if (opcao != 2) printf("2 - Área\n");
    if (opcao != 3) printf("3 - PIB\n");
    if (opcao != 4) printf("4 - Pontos Turísticos\n");
    if (opcao != 5) printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    switch (opcao2)
    {
        case 1:
            printf("Atributo 2: População\n");
            valor2_C1 = (float)Populacao1;
            valor2_C2 = (float)Populacao2;
            break;
        case 2:
            printf("Atributo 2: Área\n");
            valor2_C1 = Area1;
            valor2_C2 = Area2;
            break;
        case 3:
            printf("Atributo 2: PIB\n");
            valor2_C1 = Pib1;
            valor2_C2 = Pib2;
            break;
        case 4:
            printf("Atributo 2: Pontos Turísticos\n");
            valor2_C1 = (float)NumeroDePontosTuristico1;
            valor2_C2 = (float)NumeroDePontosTuristico2;
            break;
        case 5:
            printf("Atributo 2: Densidade Demográfica\n");
            valor2_C1 = resultado1;
            valor2_C2 = resultado2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // --- LÓGICA DE SOMA E RESULTADO FINAL (Nível Mestre) ---
    somaC1 = valor1_C1 + valor2_C1;
    somaC2 = valor1_C2 + valor2_C2;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: Atributo 1 (%.2f) + Atributo 2 (%.2f) = Total: %.2f\n", nomeDaCidade1, valor1_C1, valor2_C1, somaC1);
    printf("%s: Atributo 1 (%.2f) + Atributo 2 (%.2f) = Total: %.2f\n", nomeDaCidade2, valor1_C2, valor2_C2, somaC2);

    // Veredito com Operador Ternário
    printf("\nVENCEDOR DA RODADA: ");
    (somaC1 > somaC2) ? printf("%s\n", nomeDaCidade1) : 
    (somaC2 > somaC1) ? printf("%s\n", nomeDaCidade2) : 
                        printf("Empate!\n");

    return 0;
}


