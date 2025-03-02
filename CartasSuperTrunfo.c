#include <stdio.h>

int main() {
    // Atributos para a primeira carta
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float DensidadePopulacional1;
    float PBIPercapita1;

    // Atributos para a segunda carta
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float DensidadePopulacional2;
    float PBIPercapita2;


    // Cadastro da primeira carta
    printf("Cadastro da Carta 1: \n");
    printf("Digite uma População da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite uma Área da cidade (em km²): \n");
    scanf("%f", &area1);
    printf("Digite um PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite um Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    printf("Digite um Número de Densidade Populacional: Populaçao/Area \n");
    scanf("%f", &DensidadePopulacional1);
    printf("Digite um Número de PIB per capita: PIB/População \n");
    scanf("%f", &PBIPercapita1);

    // Cadastro da segunda carta
    printf("Cadastro da Carta 2: \n");
    printf("Digite uma População da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite uma Área da cidade (em km²): \n");
    scanf("%f", &area2);
    printf("Digite um PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite um Número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("Digite um Número de Densidade Populacional: Populaçao/Area \n");
    scanf("%f", &DensidadePopulacional2);
    printf("Digite um Número de PIB per capita: PIB/População \n");
    scanf("%f", &PBIPercapita2);


    // Exibindo os dados da primeira carta
    printf("\nDados da Carta 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("DensidadePopulacional: %.2f\n", DensidadePopulacional1);
    printf("PBIPercapita: %.2f\n", PBIPercapita1);

    // Exibindo os dados da segunda carta
    printf("\nDados da Carta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("DensidadePopulacional: %.2f\n", DensidadePopulacional2);
    printf("PBIPercapita: %.2f\n", PBIPercapita2);

    return 0;
}
