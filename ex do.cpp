#include <stdio.h>

int main() {

    int resposta;

    printf("=================================\n");
    printf("      ESCAPE ROOM - FUGA\n");
    printf("=================================\n");
    printf("Voce acordou preso em uma sala misteriosa.\n");
    printf("Resolva os 5 desafios para escapar!\n\n");

    // PORTA 1
    printf("=== PORTA 1 ===\n");
    printf("Quanto e 12 + 18?\n");
    scanf("%d", &resposta);

    if(resposta != 30){
        printf("Resposta incorreta!\n");
        return 0;
    }

    printf("Porta 1 aberta!\n\n");

    // PORTA 2
    printf("=== PORTA 2 ===\n");
    printf("Qual e a capital do Brasil?\n");
    printf("1 - Sao Paulo\n");
    printf("2 - Brasilia\n");
    printf("3 - Rio de Janeiro\n");
    scanf("%d", &resposta);

    if(resposta != 2){
        printf("Resposta incorreta!\n");
        return 0;
    }

    printf("Porta 2 aberta!\n\n");

    // PORTA 3
    printf("=== PORTA 3 ===\n");
    printf("Complete a sequencia:\n");
    printf("2, 4, 6, 8, ?\n");
    scanf("%d", &resposta);

    if(resposta != 10){
        printf("Resposta incorreta!\n");
        return 0;
    }

    printf("Porta 3 aberta!\n\n");

    // PORTA 4
    printf("=== PORTA 4 ===\n");
    printf("Quanto e 7 x 8?\n");
    scanf("%d", &resposta);

    if(resposta != 56){
        printf("Resposta incorreta!\n");
        return 0;
    }

    printf("Porta 4 aberta!\n\n");

    // PORTA 5
    printf("=== PORTA 5 - FINAL ===\n");
    printf("Qual e o melhor amigo do homem?\n");
    printf("1 - Gato\n");
    printf("2 - Cavalo\n");
    printf("3 - Cachorro\n");
    scanf("%d", &resposta);

    if(resposta != 3){
        printf("Resposta incorreta!\n");
        return 0;
    }

    printf("\n=================================\n");
    printf(" PARABENS! VOCE ESCAPOU DA SALA!\n");
    printf("=================================\n");

    return 0;
}
