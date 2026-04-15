#include <stdio.h>

void main()
{
    char tabuleiro[3][3] = {
        {'O', 'O', 'O'},
        {'O', 'X', 'X'},
        {'X', 'X', 'X'}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > 0)
                printf(" ");
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("Criado por Marcelo Mendes");
}