//pointer question
#include<stdio.h>
int main ()
{
    int x;
    int *ptr;
    
    ptr=&x;
    *ptr=0;
    printf("%d \n",x);
    *ptr +=7;
    printf("%d \n",*ptr);
    *ptr=x-3 ;
    printf("%d\n",x);
    *ptr=*ptr-1;
    printf("%d \n",*ptr);
    x=*ptr+*ptr+x;
    printf("%d \n",x);
    *ptr=x-1;
    printf("%d \n",*ptr);
    *ptr=*ptr/2;
    printf("%d \n",x);
    x=x+3;
    printf("%d \n",x);
    *ptr=x+2;
    printf("%d \n",x);
    x=*ptr/x;
    printf("%d \n",x);
    *ptr=x+x;
    printf("%d \n",*ptr);
    return 0;
}