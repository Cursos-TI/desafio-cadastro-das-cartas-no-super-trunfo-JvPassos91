#include <stdio.h>

int main() {
    int carta;
    char Estado[15]; 
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

printf("Selecione a sua carta:\n");
scanf("%d", &carta);

printf("Digite o estado que sua carta representa:\n");
scanf("%s", &estado);

printf("Digite a População:\n");
scanf ("%d", &populacao);

printf ("Digite a Área:\n");
scanf ("%f", &area);

printf ("Digite o PIB:\n");
scanf ("%d", &pib);

printf ("Digite a quantidade de Pontos Turisticos:\n");
scanf ("%f", &pontosturisticos);

printf("População: %d\n", populacao);
    
printf("Área: %d\n", area);

printf("PIB: %d\n", pib);

printf("Pontos Turísticos:%d/n", pontosturisticos);
    


    return 0;
}
