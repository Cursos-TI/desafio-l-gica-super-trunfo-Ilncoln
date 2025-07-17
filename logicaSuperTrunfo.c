#include <stdio.h>

int main(){
    // Declaração de variaveis
    
    char Estado1, Codigo1[20], Cidade1[20], Estado2, Codigo2[20], Cidade2[20];
    int Pontos_turisticos1, Pontos_turisticos2, comparacaodeatributos1, comparacaodeatributos2, resultado1, resultado2, somaresultado1, somaresultado2;
    float Area1, PIB1, Area2, PIB2, densidade1, densidade2, PIBpc1, PIBpc2, SuperPoder1, SuperPoder2;
    unsigned long int Populacao1, Populacao2;
    int  resultadofinal1, resultadofinal2, somaresultado3, somaresultado4;


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


    //Menu1 e Comparação

    printf("*--Escolha o Primeiro atributo para ser comparado--*\n");
    printf("1. População.\n");
    printf("2. Pontos Turisticos.\n");
    printf("3. Area.\n");
    printf("4. PIB.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capta.\n");
    printf("7. Super Poder.\n");
    printf("Escolha: ");
    scanf("%i", &comparacaodeatributos1);


    switch (comparacaodeatributos1)
    {
    case 1:
    printf("Primero atributo escolhido: População\n");
    resultado1 = Populacao1 > Populacao2 ? 1 : 0;
    somaresultado1 = Populacao1;
    somaresultado2 = Populacao2;
    
        break;
    
    case 2:
    printf("Primero atributo escolhido: Pontos turisticos\n");
    resultado1 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
    somaresultado1 = Pontos_turisticos1;
    somaresultado2 = Pontos_turisticos2;
    
        break;
        
    case 3:
    printf("Primero atributo escolhido: Area\n");
    resultado1 = Area1 > Area2 ? 1 : 0;
    somaresultado1 = Area1;
    somaresultado2 = Area2;
    

        break;
        
    case 4:
    printf("Primero atributo escolhido: PIB\n");
    resultado1 = PIB1 > PIB2 ? 1 : 0;
    somaresultado1 = PIB1;
    somaresultado2 = PIB2;

        break;
        
    case 5:
    printf("Primero atributo escolhido: Densidade populacional\n");
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    somaresultado1 = densidade1;
    somaresultado2 = densidade2;

        break;
        
    case 6:
    printf("Primero atributo escolhido: PIB per capta\n");
   resultado1 = PIBpc1 > PIBpc2 ? 1 : 0;
   somaresultado1 = PIBpc1;
   somaresultado2 = PIBpc2;
   

        break;
        
    case 7:
    printf("Primero atributo escolhido: Super poder\n");
   resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;
   somaresultado1 = SuperPoder1;
   somaresultado2 = SuperPoder2;
   

        break;    
    
    default:
    printf("Opção invalida\n");
        break;
    }


    //menu2 e Comparação


    printf("*--Escolha o Segundo atributo para ser comparado--*\n");
    printf("***Escolha um Atrubuto diferente do primeiro***\n");
    printf("1. População.\n");
    printf("2. Pontos Turisticos.\n");
    printf("3. Area.\n");
    printf("4. PIB.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capta.\n");
    printf("7. Super Poder.\n");
    printf("Escolha: ");
    scanf("%i", &comparacaodeatributos2);

    if (comparacaodeatributos1 == comparacaodeatributos2)
    {printf("Você selecionou o mesmo atributo duas vezes\n");}
    else{
    switch (comparacaodeatributos2)
    {
    case 1:
    printf("Segundo atributo escolhido: População\n");
    resultado2 = Populacao1 > Populacao2 ? 1 : 0;
    somaresultado3 = Populacao1;
    somaresultado4 = Populacao2;
    
    case 2:
    printf("Segundo atributo escolhido: Pontos turisticos\n");
    resultado2 = Pontos_turisticos1 > Pontos_turisticos2 ? 1 : 0;
    somaresultado3 = Pontos_turisticos1;
    somaresultado4 = Pontos_turisticos2;
    
        break;
        
    case 3:
    printf("Segundo atributo escolhido: Area\n");
    resultado2 = Area1 > Area2 ? 1 : 0;
    somaresultado3 = Area1;
    somaresultado4 = Area2;
   

        break;
        
    case 4:
    printf("Segundo atributo escolhido: PIB\n");
    resultado2 = PIB1 > PIB2 ? 1 : 0;
    somaresultado3 = PIB1;
    somaresultado4 = PIB2;
    

        break;
        
    case 5:
    printf("Segundo atributo escolhido: Densidade populacional\n");
    resultado2 = densidade1 < densidade2 ? 1 : 0;
    somaresultado3 = densidade1;
    somaresultado4 = densidade2;
    
        break;
        
    case 6:
    printf("Segundo atributo escolhido: PIB per capta\n");
   resultado2 = PIBpc1 > PIBpc2 ? 1 : 0;
   somaresultado3 = PIBpc1;
   somaresultado4 = PIBpc2;
   

        break;
        
    case 7:
    printf("Segundo atributo escolhido: Super poder\n");
   resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;
    somaresultado3 = SuperPoder1;
    somaresultado4 = SuperPoder2;

        break;    
    
    default:
    printf("Opção invalida\n");
        break;
    }    
        };

    
    //Resultado 
    
    resultadofinal1 = somaresultado1 + somaresultado3;
    resultadofinal2 = somaresultado2 + somaresultado4;
    
    
    if (resultadofinal1 > resultadofinal2)
    {
    printf("Cidades: %s e %s\n", Cidade1, Cidade2);
    printf("A soma dos atributos escolhidos da carta 1 são: %i\n", resultadofinal1);
    printf("A soma dos atributos escolhidos da carta 2 são: %i\n", resultadofinal2);
    printf("Carta 1 Venceu!\n");}
    else if (resultadofinal1 == resultadofinal2)
    {
    printf("Cidades: %s e %s\n", Cidade1, Cidade2);
    printf("A soma dos atributos escolhidos da carta 1 são: %i\n", resultadofinal1);
    printf("A soma dos atributos escolhidos da carta 2 são: %i\n", resultadofinal2);
    printf("Empate!\n");}
    else
    {
    printf("Cidades: %s e %s\n", Cidade1, Cidade2);
    printf("A soma dos atributos escolhidos da carta 1 são: %i\n", resultadofinal1);
    printf("A soma dos atributos escolhidos da carta 2 são: %i\n", resultadofinal2);
    printf("Carta 2 venceu!\n");}
    
    
    

    return 0;

}
