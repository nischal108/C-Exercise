// wap to enter the bid title price and pages of the book into the structure variable called book and sort them in descending order on the basis of therir title with the use of pointer

#include <stdio.h>
#include <string.h>
#define SIZE 4

typedef struct
{
    char title[20];
    float price;
} book;

void swap(book *a, book *b)
{
    book temp = *a;
    *a = *b;
    *b = temp;
}

void sortarray(book *a, const int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if ((strcmp(a[j].title, a[j + 1].title)) > 0)
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main()
{

    book books[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("enter the details of book %d ", i);
        printf("\nenter the title of the book: ");
        scanf("%s", books[i].title);
        printf(" \n enter the price of book : ");
        scanf("%f", &books[i].price);
    }
    // sorting the books in ascending order
    sortarray(books, SIZE);
    // display the final output
    printf("\n final output \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("details of book %d ", i);
        printf("title: ");
        puts(books[i].title);
        printf(" \n price: %f\n", books[i].price);
    }
    return 0;
}