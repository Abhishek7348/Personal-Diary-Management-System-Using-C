#include <stdio.h>
#include <string.h>

void input()
{

    int n, i = 0;
    char arr[100][100];

    char stop[] = {"stop"};

    for (i = 0; i < 100; i++)
    {

        fflush(stdin);
        scanf("%[^\n]", arr[i]);

        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (stop[j] == arr[i][j])
            {

                count++;
            }
        }

        if (count == 4)
        {
            printf("word match\n");
            break;
        }
    }

   /* for (int j = 0; j < i; j++)
    {

        printf("%s\n", arr[j]);
    }*/

    
}
