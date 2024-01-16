#include <stdio.h>
#include <string.h>
int main () {
    char name[50] = "man";
    char name2[50]="nischal";
    int length;
    length = strcmp(name,name2);
    printf("%d",length);    
    return 0;
}