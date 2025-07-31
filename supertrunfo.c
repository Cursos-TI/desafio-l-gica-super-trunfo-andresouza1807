#include <stdio.h>

int main() {
    int escolha1, escolha2;
    int forca1 = 80, forca2 = 70;
    int velocidade1 = 60, velocidade2 = 90;
    int inteligencia1 = 75, inteligencia2 = 75;

    int soma1 = 0, soma2 = 0;

    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1. Força\n2. Velocidade\n3. Inteligência\n");
    scanf("%d", &escolha1);

    printf("Escolha o SEGUNDO atributo para comparar:\n");
    scanf("%d", &escolha2);

    for (int i = 0; i < 2; i++) {
        int esc = (i == 0) ? escolha1 : escolha2;
        switch (esc) {
            case 1:
                soma1 += forca1;
                soma2 += forca2;
                break;
            case 2:
                soma1 += velocidade1;
                soma2 += velocidade2;
                break;
            case 3:
                soma1 += inteligencia1;
                soma2 += inteligencia2;
                break;
            default:
                printf("Atributo inválido!\n");
        }
    }

    printf("Resultado final:\n");
    printf("Carta 1: %d pontos\n", soma1);
    printf("Carta 2: %d pontos\n", soma2);

    (soma1 > soma2) ? printf("Carta 1 vence!\n") :
    (soma1 < soma2) ? printf("Carta 2 vence!\n") :
    printf("Empate!\n");

    return 0;
}