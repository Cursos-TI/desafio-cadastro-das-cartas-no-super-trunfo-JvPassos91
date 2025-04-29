#include <stdio.h>

int main() {
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

printf("Digite a População:\n");
scanf ("%d", &populacao);

printf ("Digite a Área:\n");
scanf ("%f", &area);

printf ("Digite o PIB:\n");
scanf ("%d", &pib);

printf ("Digite a quantidade de Pontos Turisticos:\n");
scanf ("%f", &pontosturisticos);

printf("População: %d - Área: %f\n", populacao , area);
printf("PIB: %d - Quantidade de Pontos Turisticos: %d\n", pib, pontosturisticos);


    return 0;
}
