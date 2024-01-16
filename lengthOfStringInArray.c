//wa function print_length that takes an array of characters pointers as a parameter and then print the length of ech string in that array. Use pointers arithmetic instead of array subscripting wherever possible 

#include<stdio.h>
void print_length(char (*string)[100]);
void writedata(char names[][100]);

int main (){
    char names[5][100];
    writedata(names);
    print_length(names);
    return 0;
}

void writedata(char names[5][100]){
    int i;
    for(i=0;i<5;i++){
        printf("enter %d name  : ",i);
        fgets(names[i], 100, stdin);
    }
}

void print_length (char (*names)[100]){
    int i, count;
    for(i=0;i<5;i++){
        count =0;
        while (*(*(names + i) + count) != '\0')
        {
            count++;
        }
        printf(" the number of character in %d string is %d  \n",i,--count);
    }
}