#include <stdio.h>
#include <Windows.h>


int fream1()
{
    int i, j, N = 40;

    /* Input number of rows from user 
  printf("Enter number of rows: ");
  scanf("%d", &N);*/

    /* Iterate over each row */
    printf("\n\n\n\n");

    for (i = 1; i <= N; i++)
    {

        printf("   ");
        /* Iterate over each column */
        for (j = 1; j <= 2 * N; j++)
        {
            if (i == 1 || i == N || j == 1 || j == 2 * N)
            {
                /* Print star for 1st, Nth row and column */
                printf("%c ", 219);
            }
            else
            {
                printf("  ");
            }
        }

        /* Move to the next line/row */
        printf("\n");
    }
    gotoxy(0,5);
    
    return 0;
}
