
//using dynamic memory allocation and concept of pointers to ask user to enter gae of 10 students and count the ages that meet the requirements.




#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,count=0;
    int *p;
    p = (int *)calloc(10,sizeof(int));
    printf("enter the age of 10 students : ");
    for(i=0;i<10;i++){
        scanf("%d", p+i);
        if((*(p+i))>18 && (*(p+i))<25){
            count++;
        }
    }
    printf("the number of ages between 18 and 25 id %d \n",count);

}
