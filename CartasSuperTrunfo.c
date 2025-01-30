#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
   
    int pturisticos, populacao;
    char codigo[30];
    float area, PIB;
    
    printf("Digite o código e nome da cidade: ");
    scanf("%s", &codigo);

    printf("Forneça a população: ");
    scanf("%i", &populacao);

    printf("Forneça a área: ");
    scanf("%f", &area);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB);

    printf("Forneça o número de pontos turísticos: ");
    scanf("%i", &pturisticos);

    printf("- A carta escolhida é: %s\n", codigo);
    printf("- População: %i\n", populacao);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %.2f\n", PIB);
    printf("- Número de pontos turísticos: %i\n", pturisticos);


    return 0;
}
