#include <stdio.h>

typedef struct {
    char estado[30];
    int codigo;
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void lerCarta(Carta *c) {
    printf("Digite o código da carta: ");
    scanf("%d", &c->codigo);

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", c->estado);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", c->cidade);

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &c->area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &c->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);
}

void mostrarCarta(Carta c) {
    printf("\n----- CARTA SUPER TRUNFO -----\n");
    printf("Código: %d\n", c.codigo);
    printf("Estado: %s\n", c.estado);
    printf("Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    printf("==== Digite os dados da Carta 1 ====\n");
    lerCarta(&carta1);

    printf("\n==== Digite os dados da Carta 2 ====\n");
    lerCarta(&carta2);

    printf("\n==== Exibindo Cartas ====\n");
    mostrarCarta(carta1);
    mostrarCarta(carta2);

    return 0;
}
