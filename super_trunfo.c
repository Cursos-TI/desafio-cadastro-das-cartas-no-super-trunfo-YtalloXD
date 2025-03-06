#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char city_name1[50] = "São Paulo";
    char card_code1[50] = "A01";
    char state1[50] = "A";
    int poi_qty1 = 50;
    float areaKm1 = 1521.11;
    float pib1 = 699.28;
    unsigned long int popul1 = 12325000;
    unsigned long int densipopul1 = 8102.47;
    unsigned long pibpc1 = 56724.32;

    float superpoder1 = popul1 + areaKm1 + pib1 + pibpc1 + (1/densipopul1) + poi_qty1;

    char city_name2[50] = "Rio de Janeiro";
    char card_code2[50] = "B02";
    char state2[50] = "B";
    int poi_qty2 = 30;
    float areaKm2 = 1200.25;
    float pib2 = 300.50;
    unsigned long int popul2 = 6748000;
    unsigned long int densipopul2 = 5622.24;
    unsigned long int pibpc2 = 44532.91;

    float superpoder2 = popul2 + areaKm2 + pib2 + pibpc2 + (1/densipopul2) + poi_qty2;
    
// Exibindo as cartas cadastradas.

// carta 1 abaixo:

    printf("Carta 1:\nEstado: %s\n", state1);

    printf("Código da carta: %s\n", card_code1);
    
    printf("Nome da Cidade: %s\n", city_name1);

    printf("População: %u\n", popul1);

    printf("Área: %.2f\n", areaKm1);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", poi_qty1);

    printf("Densidade Populacional: %u\n", densipopul1);

    printf("PIB per Capita: %u\n", pibpc1);

//carta 2 abaixo:

    printf("\nCarta 2:\nEstado: %s\n", state2);

    printf("Código da carta: %s\n", card_code2);
    
    printf("Nome da Cidade: %s\n", city_name2);

    printf("População: %u\n", popul2);

    printf("Área: %.2f\n", areaKm2);

    printf("PIB: %.2f\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", poi_qty2);

    printf("Densidade Populacional: %u\n", densipopul2);

    printf("PIB per Capita: %u\n", pibpc2);

//Comparando as cartas abaixo:

    printf("\nComparando as cartas:\n");

    printf("População: Carta 1 venceu (%u)\n Área: Carta 1 venceu (%d)\n PIB: Carta 1 venceu (%d)\n Pontos Turísticos: Carta 1 venceu (%d)\n Densidade Populacional: Carta 2 venceu (%u)\n PIB per Capita: Carta 1 venceu (%u)\n Super Poder: Carta 1 venceu %d", pib1 > pib2, areaKm1 > areaKm2, popul1 > popul2, poi_qty1 > poi_qty2, densipopul1 < densipopul2, pibpc1 > pibpc2, superpoder1 > superpoder2);

    return 0;
}
