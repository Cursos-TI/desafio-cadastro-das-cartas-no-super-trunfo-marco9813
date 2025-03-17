#include <stdio.h>


int main() {
    // Carta 1
    char Estado; 
    char codigoDaCarta[50];
    char Cidade[50];
    int populacao;
    float Area;
    float PIB;
    int pontoTuristico;
    // Carta 2
    char Estado2; 
    char codigoDaCarta2[50];
    char Cidade2[50];
    int populacao2;
    float Area2;
    float PIB2;
    int pontoTuristico2;

    printf("Digite uma letra do Estado: \n"); // aqui utilizei o \n para pular a linha para baixo.
    scanf("%c", &Estado); // aqui será inserido apenas uma letra pelo usuario e o scanf vai armazenar o dado dentro da vairiavel Estado.

    printf("Digite o Código da carta uma letra seguida do numero: \n");
    scanf("%s", codigoDaCarta); // aqui coloca a letra do Estado e o numero referente a ela.

    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade); // aqui coloca o nome da cidade e, se for nome composto junta elas e não utrapasse o limite.

    printf("Digite o numero de Habitantes: \n");
    scanf("%d", &populacao); // coloque o numero de habitantes em numero Decimal.

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area); // coloca o numero da area com ponto flutuante.

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB); // coloque o PIB em numero flutuante.

    printf("Digite o numero total de ponto turistico da Cidade: \n");
    scanf("%d", &pontoTuristico); // o ponto turistico em numero Decimal.
    
    // PRINTF E SCANF DA CARTA 2;

    printf("Digite uma letra de outro Estado: \n"); // aqui coloca outra letra para o Estado referente a carta 2.
    scanf(" %c", &Estado2); 

    printf("Digite outro Código da carta uma letra seguida do numero: \n"); // aqui coloca outra letra seguida do numero para a segunda carta.
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome de outra Cidade: \n"); // coloca outro nome da cidade.
    scanf("%s", Cidade2); 

    printf("Digite o numero de Habitantes: \n"); // o numero de habitantes da cidade nova.
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade: \n"); // o tamanho dela.
    scanf("%f", &Area2);

    printf("Digite o PIB da Cidade: \n"); // o PIB da cidade nova.
    scanf("%f", &PIB2); 

    printf("Digite o numero total de ponto turistico da Cidade: \n"); // o numero total do ponto turistico da cidade nova.
    scanf("%d", &pontoTuristico2); 


    printf("Carta 1:\n"); // aqui é para separar as Cartas.
    printf("Estado: %c\n", Estado); // aqui será imprimido a letra que foi digitada e armazenada na variavel Estado.
    printf("Código da Carta: %s\n", codigoDaCarta); // aqui sera imprimido a letra junto com o numero.
    printf("Cidade: %s\n", Cidade); // aqui sera imprimido o nome da cidade.
    printf("Habitantes: %d\n", populacao); // aqui será imprimido o numero de habitantes em Decimal.
    printf("Área(Km): %.2f\n", Area); // aqui será imprimido a área em ponto flutuante apenas com 2 casas decimal.
    printf("PIB: %.2f\n", PIB); // aqui será imprimido o PIB da cidade em ponto flutuante com 2 casas decimal.
    printf("Pontos Turisticos: %d\n", pontoTuristico); // aqui será imprimido o ponto turistico em Decimal.

    printf("Carta 2:\n"); 
    printf("Estado: %c\n", Estado2); 
    printf("Código da Carta: %s\n", codigoDaCarta2); 
    printf("Cidade: %s\n", Cidade2); 
    printf("Habitantes: %d\n", populacao2); 
    printf("Área(Km): %.2f\n", Area2); 
    printf("PIB: %.2f\n", PIB2); 
    printf("Pontos Turisticos: %d\n", pontoTuristico2); 

    return 0;


}