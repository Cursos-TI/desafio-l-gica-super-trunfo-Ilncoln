#include <stdio.h>

int main(){
    // Declaração de variaveis
    
    char Estado1, Codigo1[20], Cidade1[20], Estado2, Codigo2[20], Cidade2[20];
    int Pontos_turisticos1, Pontos_turisticos2;
    float Area1, PIB1, Area2, PIB2, densidade1, densidade2, PIBpc1, PIBpc2, SuperPoder1, SuperPoder2;
    unsigned long int Populacao1, Populacao2;



    //carta 1

    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado1);

    printf("Digite o codigo: ");
    scanf("%s", Codigo1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &Populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &Pontos_turisticos1);

    printf("Digite a area: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);


    //carta 2
    

    printf("Carta 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o codigo: ");
    scanf("%s", Codigo2);

    printf("Digite a cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &Populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%i", &Pontos_turisticos2);

    printf("Digite a area: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);


    //cauculos

    densidade1 = Populacao1 / Area1;
    densidade2 = Populacao2 / Area2;

    PIBpc1 = Populacao1 / PIB1;
    PIBpc2 = Populacao2 / PIB2;

    SuperPoder1 = Populacao1 + Area1 + PIB1 + Pontos_turisticos1 + PIBpc1 + (1 / densidade1);
    SuperPoder2 = Populacao2 + Area2 + PIB2 + Pontos_turisticos2 + PIBpc2 + (1 / densidade2);


    //Comparação

    printf("--Comparacao de cartas--\n");
    printf("Dsensidade populacional\n");
    printf("Carta1: %.2f\n", densidade1);
    printf("Carta1: %.2f\n", densidade2);
    
    if(densidade1 < densidade2)
    {printf("Carta 1 venceu");}
    else{printf("carta 2 venceu\n");}

    return 0;
}
