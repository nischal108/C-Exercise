// wap to accept 100 numbers from user and stire them in odd.txt and even.txt based on their characteristics and display the conetent of oddtxt file.

#include <stdio.h>
FILE *fodd, *feven;
int main()
{
    int n, i, digit;
    printf("how many numbers you want to store \n");
    scanf("%d", &n);
    fodd = fopen("odd.txt", "w+");
    feven = fopen("even.txt", "w");
    printf("enter the digits one by one : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &digit);
        if (digit % 2 == 0)
        {
            fprintf(feven, "%d", digit);
        }
        else
        {
            fprintf(fodd, "%d", digit);
        }
    }
    printf("\n insertion completed \n");
    fclose(feven);

    fseek(fodd, 0, 0);
    printf("The data in odd file is:\n");
    while (fscanf(fodd, "%d", &digit) != EOF)
    {
        printf("%d\n", digit);
    }

    fclose(fodd);
    return 0;
}