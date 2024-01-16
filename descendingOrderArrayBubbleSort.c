// use bubble sort algorithm to sort an array in descending order
#include <stdio.h>
#define NUM 8
int main()
{
    int array[NUM];
    int i, j, temp;
    printf("enter the numbers for an array : ");
    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &array[i]);
    }

    // bubble sort
    for (i = 0; i < NUM; i++)
    {
        for (j = 0; j < NUM - i; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("sorted array \n");
    for (i = 0; i < NUM; i++)
    {
        printf("%d  ", array[i]);
    }
    return 0;
}