#include<stdio.h>
#include<string.h>

int main () {
    char string[20];

    int i, j , len;

    printf("enter the string : ");
    scanf("%s", string);


    len = strlen(string);

    printf("\n the desired pattern is \n");



    //pattern printing 

    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
            printf("%c ",string[j]);
        }
        printf("\n");
    }
    return 0;
}