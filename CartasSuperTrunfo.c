#include <stdio.h>

int main() {
    // Carta 1 – João Pessoa
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[] = "João Pessoa";
    int populacao1 = 833932;
    float area1 = 210.45;
    float pib1 = 25.60;
    int pontosTuristicos1 = 15;

    // Carta 2 – Recife
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[] = "Recife";
    int populacao2 = 1653461;
    float area2 = 218.44;
    float pib2 = 80.10;
    int pontosTuristicos2 = 22;

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
