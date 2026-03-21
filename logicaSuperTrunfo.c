#include <stdio.h>

int main(){

    // CARTA 1
    char ceara1[50], brasil1[50];
    int praiadofuturo1 = 0, arenacastelao1 = 2;
    float area1 = 313.8;
    int populacao1 = 2430000;
    float pib1 = 86.9;

   // CARTA 2
    char bahia2[50], brasil2[50];
    int Pelourinho2 = 0, ElevadorLacerda = 1, fontenova2 = 2;
    float area2 = 693.8, pib2 = 31.7;
    int populacao2 = 2500000;

    printf("Cadastro da carta 1:\n");

    printf("Estado:\n");
    scanf("%s", ceara1);

    printf("Nome do pais:\n");
    scanf("%s", brasil1);

    printf("Populacao:\n");
    scanf("%d", &populacao1);

    printf("Area:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf ("numero de pontos turiscos:\n");
            scanf ("%d", &praiadofuturo1);
            scanf ("%d", &arenacastelao1);

    printf("\nCadastro da carta 2:\n");

    printf("Estado:\n");
    scanf("%s", bahia2);

    printf("Nome do pais:\n");
    scanf("%s", brasil2);

    printf("Populacao:\n");
    scanf("%d", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf ("numero de pontos turiscos:\n");
            scanf ("%d", &Pelourinho2);
            scanf ("%d", &ElevadorLacerda);
            scanf ("%d", &fontenova2);


    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("\nMenu:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade\n");
    scanf("%d", &opcao);

    printf("\nResultado:\n");

    switch(opcao){

        case 1:
            printf("%s: %d\n", ceara1, populacao1);
            printf("%s: %d\n", bahia2, populacao2);

            if(populacao1 > populacao2)
                printf("Vencedor: %s\n", ceara1);
            else if(populacao2 > populacao1)
                printf("Vencedor: %s\n", bahia2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("%s: %.2f\n", ceara1, area1);
            printf("%s: %.2f\n", bahia2, area2);

            if(area1 > area2)
                printf("Vencedor: %s\n", ceara1);
            else if(area2 > area1)
                printf("Vencedor: %s\n", bahia2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("%s: %.2f\n", ceara1, pib1);
            printf("%s: %.2f\n", bahia2, pib2);

            if(pib1 > pib2)
                printf("Vencedor: %s\n", ceara1);
            else if(pib2 > pib1)
                printf("Vencedor: %s\n", bahia2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("%s: %d\n", ceara1, praiadofuturo1);
            printf("%s: %d\n", bahia2, Pelourinho2);

            if(pontos1 > pontos2)
                printf("Vencedor: %s\n", ceara1);
            else if(pontos2 > pontos1)
                printf("Vencedor: %s\n", bahia2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("%s: %.2f\n", ceara1, densidade1);
            printf("%s: %.2f\n", bahia2, densidade2);

            if(densidade1 < densidade2)
                printf("Vencedor: %s\n", ceara1);
            else if(densidade2 < densidade1)
                printf("Vencedor: %s\n", bahia2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
