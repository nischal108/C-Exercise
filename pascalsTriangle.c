/*
                          1
                         1 1
                        1 2 1
                       1 3 3 1
                      1 4 6 4 1

*/

#include <stdio.h>

int main()
{
    int num, i, j, space;

    for (i = 1; i <= 5; i++)
    {
        for(space=0 ; space<5-i ;space++){
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
            {
                num = 1;
                printf("%d ", num);
            }
            else
            {
                num = num * (i - j + 1) / (j - 1);
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}
