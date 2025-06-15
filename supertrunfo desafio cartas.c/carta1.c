#include <stdio.h>

int main() {
    // carta 1
    char estado[10];  // Para armazenar a sigla do estado (10 caracteres + \0)
    char codigoCarta[10]; 
    char nomeCidade[50];                    
    int populacao, numeroPontosTuristicos; 
    float areaCidade, pib;  

    printf("Digite aqui o nome do estado:\n");
    scanf("%s", estado);
    
    printf("Digite aqui o código da carta: \n");
    scanf("%s", codigoCarta);

    printf("Digite aqui o nome da cidade: \n");
    scanf("%s", nomeCidade);  

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);  

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Área da cidade em km²: \n");
    scanf("%f", &areaCidade);

    printf("Digite aqui o PIB da cidade: \n");
    scanf("%f", &pib);

    // Exibindo todos os dados coletados
    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Pontos Turísticos: %d\n", numeroPontosTuristicos);
    printf("Área: %.2f km²\n", areaCidade);
    printf("PIB: %.2f\n", pib);

    return 0;
}