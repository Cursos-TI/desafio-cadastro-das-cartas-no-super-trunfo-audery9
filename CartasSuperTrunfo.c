
#include <stdio.h>

// Estrutura da carta do Super Trunfo
struct Carta {
    char estado;                // Letra do estado (A a H)
    char codigo[4];             // Código da carta (ex: A01)
    char nomeCidade[50];       // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // Produto Interno Bruto em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
};

int main() {
    // Carta 1: João Pessoa - PB
    struct Carta carta1 = {
        'A',                      // Estado
        "A01",                    // Código
        "João Pessoa",            // Nome da Cidade
        833932,                   // População
        210.45,                   // Área em km²
        25.60,                    // PIB em bilhões
        15                        // Pontos Turísticos
    };

    // Carta 2: Recife - PE
    struct Carta carta2 = {
        'B',
        "B02",
        "Recife",
        1653461,
        218.44,
        80.10,
        22
    };

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}