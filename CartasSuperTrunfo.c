#include <stdio.h>

typedef struct {
    unsigned long int populacao;     // População da cidade
    float area;                      // Área da cidade em km²
    float pib;                       // PIB da cidade em bilhões
    int pontosTuristicos;            // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional (população / área)
float calcularDensidadePopulacional(Carta carta) {
    return (float)carta.populacao / carta.area;
}

// Função para calcular o Super Poder (soma de todos os atributos com densidade invertida)
float calcularSuperPoder(Carta carta) {
    float densidadeInvertida = 1 / calcularDensidadePopulacional(carta);
    return (float)carta.populacao + carta.area + carta.pib + carta.pontosTuristicos + densidadeInvertida;
}

// Função para comparar dois atributos e determinar o vencedor
int compararAtributo(float valor1, float valor2, int tipo) {
    // Tipo 0 -> Comparação para Densidade Populacional (menor valor vence)
    // Tipo 1 -> Comparação para os outros atributos (maior valor vence)
    if (tipo == 0) {
        return valor1 < valor2; // Vence a carta com a menor densidade
    } else {
        return valor1 > valor2; // Vence a carta com o maior valor
    }
}

void compararCartas(Carta carta1, Carta carta2) {
    // Comparando a população
    int venceuPopulacao = compararAtributo((float)carta1.populacao, (float)carta2.populacao, 1);
    printf("Comparação População: Carta 1 %s\n", venceuPopulacao ? "vence" : "perde");

    // Comparando a área
    int venceuArea = compararAtributo(carta1.area, carta2.area, 1);
    printf("Comparação Área: Carta 1 %s\n", venceuArea ? "vence" : "perde");

    // Comparando o PIB
    int venceuPIB = compararAtributo(carta1.pib, carta2.pib, 1);
    printf("Comparação PIB: Carta 1 %s\n", venceuPIB ? "vence" : "perde");

    // Comparando o número de pontos turísticos
    int venceuPontosTuristicos = compararAtributo((float)carta1.pontosTuristicos,(float)carta2.pontosTuristicos, 1);
    printf("Comparação Pontos Turísticos: Carta 1 %s\n", venceuPontosTuristicos ? "vence" : "perde");

    // Comparando a densidade populacional (menor valor vence)
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);
    int venceuDensidade = compararAtributo(densidade1, densidade2, 0);
    printf("Comparação Densidade Populacional: Carta 1 %s\n", venceuDensidade ? "vence" : "perde");

    // Calculando e exibindo o Super Poder
    float superPoder1 = calcularSuperPoder(carta1);
    float superPoder2 = calcularSuperPoder(carta2);
    printf("\nSuper Poder:\n");
    printf("Carta 1: %.2f\n", superPoder1);
    printf("Carta 2: %.2f\n", superPoder2);
    printf("A carta com o maior Super Poder é: %s\n", superPoder1 > superPoder2 ? "Carta 1" : "Carta 2");
}

void cadastrarCarta(Carta *carta) {
    printf("Informe os dados da carta:\n");

    printf("População (unsigned long int): ");
    scanf("%lu", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    // Cadastro das cartas
    printf("Cadastro da primeira carta:\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da segunda carta:\n");
    cadastrarCarta(&carta2);

    // Comparando as cartas e calculando o Super Poder
    compararCartas(carta1, carta2);

    return 0;
}
