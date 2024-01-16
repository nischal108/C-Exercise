#include <stdio.h>
#include <string.h>
int main()
{
    char word[30];
    int i;
    int is_palindrome = 1;
    int length;

    printf("enter the string to check for  : \n");
    scanf("%29s", word);

    length = strlen(word);
    // checking if the string is palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            is_palindrome = 0;
        }
    }
    if (is_palindrome)
    {
        printf("The string you entered \"%s\" is a palindrome.\n", word);
    }
    else
    {
        printf(" the string you had entered %s is not a palindrome ", word);
    }
    return 0;
}