// program that only displays the prime number from an user input array 

#include<stdio.h>
#define SIZE 6
int main(){
    int i,j,flag, array[SIZE];
    printf("enter %d elements for an array  ",SIZE);
    for(i=0;i<SIZE;i++){
        scanf("%d",&array[i]);
    }
    printf("arrray numbers that are  prime are  \n");
    for(i=0;i<SIZE;i++){
        flag = 0;
        for(j=2;j<=array[i]/2;j++){
            if(array[i]%j==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d  \n", array[i]);
        }
        
    }

    return 0;
}