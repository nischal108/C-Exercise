//   enter the string :programming
 /*
                     programming
                     rogrammin
                     ogrammi
                     gramm
                     ram
                     a 
*/





#include<stdio.h>
#include<string.h>

int main () {
    char string[100];
    int i, j, len;


    //input the string
    printf("enter the string :");
    gets(string);



    len = strlen(string);
    //printing the patterns
    for(i=0; i<= len/2;i++){
        for(j=i;j<len-i;j++){
            printf("%c  ",string[j]);
        }
    printf("\n");
    }
    return 0;
}