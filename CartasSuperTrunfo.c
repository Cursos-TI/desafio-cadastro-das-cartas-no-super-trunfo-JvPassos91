#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[30];
    int codigo;
    char nomeCidade[50];
    long populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(long populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPIBPerCapita(float pib, long populacao) {
    return pib / populacao;
}

// Função para calcular o superpoder (fórmula arbitrária combinada)
float calcularSuperPoder(float pibPerCapita, float densidade, int pontosTuristicos) {
    return (pibPerCapita * 0.6) + (densidade * 0.3) + (pontosTuristicos * 10);
}

// Função para preencher os dados de uma carta
void preencherCarta(Carta *carta) {
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite o código da cidade: ");
    scanf("%d", &carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("Digite a população: ");
    scanf("%ld", &carta->populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Calculando os valores derivados
    carta->densidadePopulacional = calcularDensidade(carta->populacao, carta->area);
    carta->pibPerCapita = calcularPIBPerCapita(carta->pib, carta->populacao);
    carta->superPoder = calcularSuperPoder(carta->pibPerCapita, carta->densidadePopulacional, carta->pontosTuristicos);
}

// Função para exibir uma carta
void exibirCarta(Carta carta) {
    printf("\n==============================\n");
    printf("Estado: %s\n", carta.estado);
    printf("Código: %d\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %ld\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f milhões/habitante\n", carta.pibPerCapita);
    printf("Superpoder: %.2f\n", carta.superPoder);
    printf("==============================\n");
}

int main() {
    Carta carta1, carta2;

    printf("### Preencha os dados da Carta 1 ###\n");
    preencherCarta(&carta1);

    printf("\n### Preencha os dados da Carta 2 ###\n");
    preencherCarta(&carta2);

    printf("\n### Exibindo as Cartas ###\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    printf("\n### Resultado da Comparação ###\n");
    if (carta1.superPoder > carta2.superPoder) {
        printf("A cidade %s (Estado: %s) VENCEU!\n", carta1.nomeCidade, carta1.estado);
    } else if (carta2.superPoder > carta1.superPoder) {
        printf("A cidade %s (Estado: %s) VENCEU!\n", carta2.nomeCidade, carta2.estado);
    } else {
        printf("As cartas estão EMPATADAS!\n");
    }

    return 0;
}