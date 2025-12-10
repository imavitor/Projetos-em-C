#include <stdio.h>
    int main(){
    //variáveis declaradas juntas, da primeira e da segunda carta (1 e 2 no final das variáveis representam carta 1 e 2, respectivamente)
        char estado1[50], codigo1[50],cidade1[50], estado2[50], codigo2[50], cidade2[50];
        int populacao1, npturisticos1, populacao2, npturisticos2,escolha1, escolha2;  
        float area1, PIB1, area2, PIB2,atributoA1, atributoA2, atributoB1, atributoB2,soma1,soma2; //PIBPC = PIB PER CAPITA  
     //código da primeira carta
        printf("Digite o estado da primeira carta: \n");
        scanf("%s", &estado1);
        printf("Digite o código da primeira carta: \n");
        scanf("%s", &codigo1);
        printf("Digite o nome da cidade da primeira carta com apenas uma palavra sem espaços: \n");
        scanf("%s", cidade1);
        printf("Digite a população da primeira carta: \n");
        scanf("%d", &populacao1);
        printf("Digite o numero de pontos turisticos da primeira carta: \n");
        scanf("%d", &npturisticos1);
        printf("Digite a área da primeira carta em km²: \n");
        scanf("%f", &area1);
        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &PIB1);
     //código da segunda carta
        printf("Digite o estado da segunda carta: \n");
        scanf("%s", &estado2);
        printf("Digite o código da segunda carta: \n");
        scanf("%s", &codigo2);
        printf("Digite o nome da cidade da segunda carta com apenas uma palavra sem espaços: \n");
        scanf("%s", cidade2);
        printf("Digite a população da segunda carta: \n");
        scanf("%d", &populacao2);
        printf("Digite o numero de pontos turisticos da segunda carta: \n");
        scanf("%d", &npturisticos2);
        printf("Digite a área da segunda carta em km²: \n");
        scanf("%f", &area2);
        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &PIB2);

    //Declarando as variáveis da segunda parte do desafio
    float densidade1 = (float) populacao1/area1;
    float densidade2 = (float) populacao2/area2;
    float PIBPC1 = PIB1/populacao1; //PIBPC = PIB Per Capita
    float PIBPC2 = PIB2/populacao2;

    //exibição da tela da primeira carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 1\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, PIB1, npturisticos1);
    //exibindo a segunda parte em outro print apenas para ficar mais fácil de entender que esta é a segunda parte do desafio    
        printf(" Densidade Populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais\n ", densidade1, PIBPC1);
    //exibição da tela da segunda carta, variáveis declaradas no mesmo print com quebra para não repetir o comando print
        printf("Carta 2\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População %d\n Área: %.2f km²\n PIB: %.2f reais\n Número de Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, npturisticos2);
        printf(" Densidade Populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais\n ", densidade2, PIBPC2);
    
    //Exbindo o atributo a ser comparado
        printf("Escolha o primeiro atributo a ser comparado: \n");
        printf("1 - População\n 2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Demográfica\n");
        scanf("%d",&escolha1);
        
    //código para exibir apenas os atributos não escolhidos como segunda opção
        switch(escolha1){
            case 1:
                atributoA1 = populacao1; //aqui armazeno o valor do primeiro atributo da primeira carta
                atributoB1 = populacao2; //aqui armazeno o valor do primeiro atributo segunda carta
                printf("Agora escolha o segundo atributo a ser comparado: \n");
                printf("2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Demográfica\n");
                scanf("%d", &escolha2); //aqui armazeno o valor do segundo atributo da primeira carta
                if (escolha2 == 1)
                {
                    printf("Você já escolheu esse atributo! Escolha outro!");
                }
                break;
            case 2:
                atributoA1 = area1;
                atributoB1 = area2;
                printf("Agora escolha o segundo atributo a ser comparado: \n");
                printf("1 - População\n 3 - PIB\n 4 - Número de Pontos Turísticos\n 5 - Densidade Demográfica\n");
                scanf("%d", &escolha2);
                if (escolha2 == 2)
                {
                    printf("Você já escolheu esse atributo! Escolha outro!\n");
                }
                break;
            case 3:
                atributoA1 = PIB1;
                atributoB1 = PIB2;
                printf("Agora escolha o segundo atributo a ser comparado: \n");
                printf("1 - População\n 2 - Área\n 4 - Número de Pontos Turísticos\n 5 - Densidade Demográfica\n");
                scanf("%d", &escolha2);
                if (escolha2 == 3)
                {
                    printf("Você já escolheu esse atributo! Escolha outro!\n");
                }
                break;
            case 4:
                atributoA1 = npturisticos1;
                atributoB1 = npturisticos2;
                printf("Agora escolha o segundo atributo a ser comparado: \n");
                printf("1 - População\n 2 - Área\n 3 - PIB\n 5 - Densidade Demográfica\n");
                scanf("%d", &escolha2);
                if (escolha2 == 4)
                {
                    printf("Você já escolheu esse atributo! Escolha outro!\n");
                }
                break;
                case 5:
                atributoA1 = densidade1;
                atributoB1 = densidade2;
                printf("Agora escolha o segundo atributo a ser comparado: \n");
                printf("1 - População\n2 - Área\n 3 - PIB\n 4 - Número de Pontos Turísticos\n");
                scanf("%d", &escolha2);
                if (escolha2 == 4)
                {
                    printf("Você já escolheu esse atributo! Escolha outro!\n");
                }
                default:
                printf("Opção inválida!\n");
                break;
        }
        switch (escolha2){
            case 1:
                atributoB2 = populacao2;
                atributoA2 = populacao1;//aqui armazendo o valor a ser somado das duas cartas com base no valor escolhido para o segundo atributo
                break;
            case 2:
                atributoB2 = area2;
                atributoA2 = area1;
                break;
                
            case 3:
                atributoB2 = PIB2;
                atributoA2 = PIB1;
                break;
            case 4:
                atributoB2 = npturisticos2;
                atributoA2 = npturisticos1;
                break;
            case 5:
                atributoB2 = densidade2;
                atributoA2 = densidade1;
                break;
        }
    //código para exibir o menu comparar o atributo e exibir o vencedor (utilizando o if para exibir o valor no formato correto)
        printf("Resultado da comparação\n");
        switch(escolha1){
            case 1:
            printf("Primeiro Atributo Escolhido: População\n");
            break;
            case 2:
            printf("Primeiro Atributo Escolhido: Área\n");
            break;
            case 3:
            printf("Primeiro Atributo Escolhido: PIB\n");
            break;
            case 4:
            printf("Primeiro Atributo Escolhido: Número de Pontos Turísticos\n");
            break;
            case 5:
            printf("Primeiro Atributo Escolhido: Densidade Demográfica\n");
            break;
        }
        switch(escolha2){
            case 1:
            printf("Segundo Atributo Escolhido: População\n");
            break;
            case 2:
            printf("Segundo Atributo Escolhido: Área\n");
            break;
            case 3:
            printf("Segundo Atributo Escolhido: PIB\n");
            break;
            case 4:
            printf("Segundo Atributo Escolhido: Número de Pontos Turísticos\n");
            break;
            case 5:
            printf("Segundo Atributo Escolhido: Densidade Demográfica\n");
            break;
        }
        printf("Atributo 1\n");
        printf("Carta 1: %s Valor: %.2f\n", cidade1,atributoA1); 
        printf("Carta 2: %s Valor: %.2f\n", cidade2,atributoB1);
    
        printf("Atributo 2\n");
        printf("Carta 1: %s Valor: %.2f\n", cidade1,atributoA2); 
        printf("Carta 2: %s Valor: %.2f\n", cidade2,atributoB2); 
      
        
    //código das comparações
        atributoA1 < atributoB1 && escolha1 == 5 ? printf("Carta 1 Venceu a primeira comparação!\n") : printf("a primeira comparação!\n");
        atributoA1 > atributoB1 ? printf("Carta 1 Venceu a primeira comparação!\n") : printf("Carta 2 Venceu a primeira comparação!\n");
        if (atributoA1 == atributoB1){ 
            printf("Deu empate!\n");
        }
        atributoA2 < atributoB2 && escolha2 == 5 ? printf("Carta 1 Venceu a segunda comparação!\n") : printf("a segunda comparação!\n");
        if (atributoA2 == atributoB2){ 
            printf("Deu empate!\n");
        }
    //código para exibição e comparação da soma
        printf("Comparando a soma dos dois atributos: \n");
        soma1 = atributoA1 + atributoA2;
        soma2 = atributoB1 + atributoB2;
        printf("Soma da Carta 1: %.2f\nSoma da Carta 2: %.2f\n", soma1,soma2);
        soma1 > soma2 ? printf("A primeira carta venceu!") : printf("A segunda carta venceu!");
        if (soma1 == soma2){ 
            printf("Deu empate!\n");
        }
        return 0;
    }
