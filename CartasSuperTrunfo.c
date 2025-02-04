#include <stdio.h>
int main(){
   
    int pturisticos, populacao;
    char codigo[30];
    float area, PIB, PIB_per, densi_popu;
    
    printf("Digite o código e nome da cidade: ");
    scanf("%s", &codigo);

    printf("Forneça a população: ");
    scanf("%i", &populacao);

    printf("Forneça a área: ");
    scanf("%f", &area);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB);

    printf("Forneça o número de pontos turísticos: \n");
    scanf("%i", &pturisticos);

    densi_popu = populacao / area;
    PIB_per = PIB / populacao;


    printf("- A carta escolhida é: %s\n", codigo);
    printf("- População: %i\n", populacao);
    printf("- Densidade Populacional: %f\n", densi_popu);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %.2f\n", PIB);
    printf("- PIB per Capita: %f\n", PIB_per);
    printf("- Número de pontos turísticos: %i\n\n", pturisticos);


    return 0;
}
