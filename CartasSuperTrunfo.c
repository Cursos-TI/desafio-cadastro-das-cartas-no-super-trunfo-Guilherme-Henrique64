#include <stdio.h>
int main(){
    
                //Carta 1
    int pturisticos1, populacao1;
    char codigo1[30];
    float area1, PIB1, PIB_per1, densi_popu1;
    long int superpoder1;

                //Carta 2
    int pturisticos2, populacao2;
    char codigo2[30];
    float area2, PIB2, PIB_per2, densi_popu2;  
    long int superpoder2;



    printf("*** Bem vindo ao jogo Super Trunfo ***\n\n");

 
                //Cadastro da Carta 1

    printf("Cadastre a primeira carta:\n");

    printf("Digite o código e nome da cidade: ");
    scanf("%s", &codigo1);

    printf("Forneça a população: ");
    scanf("%i", &populacao1);

    printf("Forneça a área: ");
    scanf("%f", &area1);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB1);

    printf("Forneça o número de pontos turísticos: \n");
    scanf("%i", &pturisticos1);

    densi_popu1 = populacao1 / area1;
    PIB_per1 = PIB1 / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pturisticos1 + densi_popu1 + PIB_per1;


    printf("- A carta escolhida é: %s\n", codigo1);
    printf("- População: %i\n", populacao1);
    printf("- Densidade Populacional: %.2f\n", densi_popu1);
    printf("- Área: %.2f\n", area1);
    printf("- PIB: %.2f\n", PIB1);
    printf("- PIB per Capita: %.2f\n", PIB_per1);
    printf("- Número de pontos turísticos: %i\n", pturisticos1);
    printf("- SUPER PODER: %li\n\n", superpoder1);


                //Cadastro da Carta 2

    printf("Cadastre a segunda carta:\n");

    printf("Digite o código e nome da cidade: ");
    scanf("%s", &codigo2);

    printf("Forneça a população: ");
    scanf("%i", &populacao2);

    printf("Forneça a área: ");
    scanf("%f", &area2);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB2);

    printf("Forneça o número de pontos turísticos: \n");
    scanf("%i", &pturisticos2);

    densi_popu2 = populacao2 / area2;
    PIB_per2 = PIB2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pturisticos2 + densi_popu2 + PIB_per2;


    printf("- A carta escolhida é: %s\n", codigo2);
    printf("- População: %i\n", populacao2);
    printf("- Densidade Populacional: %.2f\n", densi_popu2);
    printf("- Área: %.2f\n", area2);
    printf("- PIB: %.2f\n", PIB2);
    printf("- PIB per Capita: %.2f\n", PIB_per2);
    printf("- Número de pontos turísticos: %i\n", pturisticos2);
    printf("- SUPER PODER: %li\n\n", superpoder2);

    printf("** Vence a carta que sair 1 **\n\n");
    
    printf("- Em Densidade Populacional a carta 1 é: %i\n", densi_popu1 > densi_popu2);
    printf("- Em Densidade Populacional a carta 2 é: %i\n\n", densi_popu1 < densi_popu2);

    printf("- Em Super Poder a carta 1 é: %i\n", superpoder1 > superpoder2);
    printf("- Em Super Poder a carta 1 é: %i\n\n", superpoder1 < superpoder2);


    return 0;
}