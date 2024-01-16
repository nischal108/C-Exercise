/*
                             * * * * * * *
                              * * * * *
                               * * *
                                *


*/

#include<stdio.h>

int main () {
    int i, j, space;

    for(i=1;i<=4;i++){
        for(space=0; space<i;space++){
            printf(" ");
        }
        for (j = i; j <= 4 * 2 - i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }




    return 0;
}