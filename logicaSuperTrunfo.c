#include <stdio.h>

int main(){
    // Declaração de variaveis
    
    char Estado1, Codigo1[20], Cidade1[20], Estado2, Codigo2[20], Cidade2[20];
    int Pontos_turisticos1, Pontos_turisticos2, comparacaodeatributos;
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

    printf("*--Escolha um atributo para ser comparado--*\n");
    printf("1. População.\n");
    printf("2. Pontos Turisticos.\n");
    printf("3. Area.\n");
    printf("4. PIB.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capta.\n");
    printf("7. Super Poder.\n");
    printf("Escolha: ");
    scanf("%i", &comparacaodeatributos);

    
   //Comparação

    printf("%s e %s\n", Cidade1, Cidade2);
    printf("Atributo Compardo:");


    switch (comparacaodeatributos)
    {
    case 1:
    printf(" População.\n");
    printf("População da carta 1: %lu\n", Populacao1);
    printf("População da carta 2: %lu\n", Populacao2);
    
    if (Populacao1 > Populacao2)
    {
        printf("Carta 1 Venceu\n");
    }else if (Populacao1 < Populacao2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
    
    case 2:
    printf(" Pontos turisticos.\n");
    printf("Pontos turisticos da carta 1: %i\n", Pontos_turisticos1);
    printf("Pontos turisticos da carta 2: %i\n", Pontos_turisticos2);
    
    if (Pontos_turisticos1 > Pontos_turisticos2)
    {
        printf("Carta 1 Venceu\n");
    }else if (Pontos_turisticos1 < Pontos_turisticos2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
        
    case 3:
    printf(" Area.\n");
    printf("Area da carta 1: %f\n", Area1);
    printf("Area da carta 2: %f\n", Area2);
    
    if (Area1 > Area2)
    {
        printf("Carta 1 Venceu\n");
    }else if (Area1 < Area2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
        
    case 4:
    printf(" PIB.\n");
    printf("PIB da carta 1: %.2f\n", PIB1);
    printf("PIB da carta 2: %.2f\n", PIB2);
    
    if (PIB1 > PIB2)
    {
        printf("Carta 1 Venceu\n");
    }else if (PIB1 < PIB2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
        
    case 5:
    printf(" Densidade Populacional.\n");
    printf("Densidade Populacional da carta 1: %.2f\n", densidade1);
    printf("Densidade Populacional da carta 2: %.2f\n", densidade2);
    
    if (densidade1 < densidade2)
    {
        printf("Carta 1 Venceu\n");
    }else if (densidade1 > densidade2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
        
    case 6:
    printf(" PIB Per Capta.\n");
    printf("PIB Per Capta da carta 1: %.2f\n", PIBpc1);
    printf("PIB Per Capta da carta 2: %.2f\n", PIBpc2);
    
    if (PIBpc1 > PIBpc2)
    {
        printf("Carta 1 Venceu\n");
    }else if (PIBpc1 < PIBpc2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;
        
    case 7:
    printf(" Super Poder.\n");
    printf("Super Poder da carta 1: %.2f\n", Populacao1);
    printf("Super Poder da carta 2: %.2f\n", Populacao2);
    
    if (SuperPoder1 > SuperPoder2)
    {
        printf("Carta 1 Venceu\n");
    }else if (SuperPoder1 < SuperPoder2)
    {
        printf("Carta 2 venveu\n");
    }else{printf("Empate\n");}

        break;    
    
    default:
    printf("Opção invalida");
        break;
    }

    return 0;

}
