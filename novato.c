#include <stdio.h>

int main()
{
    // movimentando a peca torre

    printf("Movimento da peca: Torre \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita \n");
    }

    int movimentoPecaBispo = 0;
    printf("\nMovimento da peca: Bispo \n");
    while (movimentoPecaBispo < 5)
    {
        printf("Cima, Direita \n");
        movimentoPecaBispo++;
    }

    int movimentoPecaRainha = 0;
    printf("\nMovimento da peca: Rainha \n");
    do
    {
        printf("Esquerda \n");
        movimentoPecaRainha++;
    } while (movimentoPecaRainha < 8);

    return 0;
}