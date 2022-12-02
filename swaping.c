//swapint 2 numbers
#include<stdio.h>
void swap(int a, int b);
void _swap(int* a,int* b);

int main ()
{
   int x=3,y=8;
   _swap(&x,&y);
   printf("x is : %d\n and y is : %d\n",x,y);
   
   
   return 0;
}
void _swap(int*a,int*b){
    int t=*a;
        *a=*b;
        *b=t;
}