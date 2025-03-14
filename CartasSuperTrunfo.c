#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Pa�ses
// Tema 1 - Cadastro das Cartas
// Este c�digo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os coment�rios para implementar cada parte do desafio.
//Teste larissa

int main(){

    char estado1;
    char estado2;
    char codigo1[4];
    char codigo2[4];
    char nomeCidade1[40];
    char nomeCidade2[40];
    unsigned long int populacao1; // cidades grandes podem ter milhoes, por isso long
    unsigned long int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int nPontosTuristicos1;
    int nPontosTuristicos2;
    float densidade1;
    float densidade2;
    float pibCapita1;
    float pibCapita2;
    float superPoder1;
    float superPoder2;
    
    printf("Vamos jogar o jogo super trunfo de paises!\n");
    printf("vamos registrar as cartas do jogo:\n");
    
    printf("Primeiro o estado, digite uma letra de 'A' a 'H':\n");
    scanf("%c", &estado1);
    printf("Digite o codigo, este sera a letra do estado seguida de um numero de 01 a 03(ex: A01, B03): \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    getchar(); //consome o caractere \n do buffer deixado pelo scanf, para nao ser consumir no fgets
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // captura strings com espa�os
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // elimina a quebra de linha que aparece ao usar fgets
    printf("Informe o numero de habitantes da cidade: \n");
    scanf("%i", &populacao1);
    printf("Digite a area da cidade(em km2): \n");
    scanf("%f", &area1);
    printf("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);
    printf("Agora a quantidade de pontos turisticos: \n");
    scanf("%i", &nPontosTuristicos1);

    densidade1 = (float) populacao1 / area1;
    pibCapita1 = (float) pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + nPontosTuristicos1 + pibCapita1 + 1/densidade1;

    printf("\nOtimo, agora vamos registrar a segunda carta, no mesmo formato:\n");
    printf("Estado('A' a 'H'):\n");
    scanf(" %c", &estado2); // espa�o antes para prevenir de ler caracteres se tiver no buffer
    printf("Codigo(ex: A01, B03): \n");
    scanf("%s", &codigo2);
    printf("Nome da cidade:\n");
    getchar(); //consome o caractere \n do buffer deixado pelo scanf, para nao ser consumir no fgets
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // captura strings com espa�os
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // elimina a quebra de linha que aparece ao usar fgets
    printf("Numero de habitantes da cidade: \n");
    scanf("%i", &populacao2);
    printf("Area da cidade(em km2): \n");
    scanf("%f", &area2);
    printf("PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%i", &nPontosTuristicos2);

    densidade2 = (float) populacao2 / area2;
    pibCapita2 = (float) pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + nPontosTuristicos2 + pibCapita2 + 1/densidade2;

    printf("Muito bem, aqui esta as cartas registradas \n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de pontos turisticos: %i\n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de pontos turisticos: %i\n", nPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("Super Poder: %.2f \n", superPoder2);


    printf("\nComparacao de Cartas: \n");
    // como a compara��o resulta em 0 ou 1, s� subtrair 2 por ela para obter o vencedor, a carta 1 ou 2
    printf("Populacao: Carta %d venceu\n", 2 - (int)(populacao1 > populacao2)); 
    printf("Area: Carta %d venceu\n", 2 - (int)(area1 > area2)); 
    printf("PIB: Carta %d venceu\n", 2 - (int)(pib1 > pib2)); 
    printf("Pontos Turisticos: Carta %d venceu\n", 2 - (int)(nPontosTuristicos1 > nPontosTuristicos2)); 
    printf("Densidade Populacional: Carta %d venceu\n", 2 - (int)(densidade1 < densidade2)); 
    printf("PIB per Capita: Carta %d venceu\n", 2 - (int)(pibCapita1 > pibCapita2)); 
    printf("Super Poder: Carta %d venceu\n", 2 - (int)(superPoder1 > superPoder2)); 


    return 0;
}