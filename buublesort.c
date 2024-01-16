#include<stdio.h>
#define NUM 4
int main (){
    int array[NUM];
    int i,j,temp;
    printf("enter %d elements for the array", NUM);
    for(i=0;i<NUM;i++)
       scanf("%d",&array[i]);

    printf("sorting array ....................... \n");

    for(i=0;i<NUM;i++){
        for(j=0;j<NUM-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j] = array[j + 1];
                array[j+1]=temp;
            }
        }
    }

    printf("\n  sorted array is");


    for(i=0;i<NUM;i++){
        printf(" %d",array[i]);
    }
                

    return 0;
}