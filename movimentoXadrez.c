#include <stdio.h>

void movimentarTorre(int movimentos)
{
    if(movimentos > 0)
    {
        printf("Direita \n");
        movimentarTorre(movimentos - 1);
    }
}


void movimentarBispo(int movimentos)
{
    if(movimentos > 0)
    {
        
        for (int i = 0; i < movimentos; i++)
        {
            printf("Cima, ");
            for (int j = 0; j < 1; j++)
            {
                printf("Direita \n");
            }
        }
        
        movimentarBispo(movimentos - movimentos -1);
    }
}

void movimentarRainha(int movimentos)
{
    if(movimentos > 0)
    {
        printf("Esquerda \n");
        movimentarRainha(movimentos - 1);
    }
}

int main()
{
    // movimentando a peca torre

    printf("Movimento da peca: Torre \n");
    movimentarTorre(5);

    int movimentoPecaBispo = 0;
    printf("\nMovimento da peca: Bispo \n");
    movimentarBispo(5);

    int movimentoPecaRainha = 0;
    printf("\nMovimento da peca: Rainha \n");
    movimentarRainha(8);
    // movimentando a peca cavalo
    int primeiroMovimentoPecaCavalo = 2;  // duas casas para cima
    int segundoMovimentoPecaCavalo = 1;   // uma casa para direita
    
    printf("\nMovimento da peca: Cavalo \n");
    
    // Loops aninhados com múltiplas variáveis e condições
    int i = 0;
    while (i < primeiroMovimentoPecaCavalo + segundoMovimentoPecaCavalo)
    {
        int j = 0;
        for (j = 0; j < 2; j++)
        {
           
            if (i < primeiroMovimentoPecaCavalo && j == 0)
            {
                printf("Cima\n");
                i++;
                if (i >= primeiroMovimentoPecaCavalo)
                {
                    continue;  
                }
            }
            else if (i >= primeiroMovimentoPecaCavalo && j == 1)
            {
                
                for (int k = 0; k < segundoMovimentoPecaCavalo; k++)
                {
                    printf("Direita\n");
                }
                i++;
                break;  // Sai do loop interno após completar o movimento para direita
            }
        }
        
        if (i >= primeiroMovimentoPecaCavalo + segundoMovimentoPecaCavalo)
        {
            break;
        }
    }

    return 0;
}