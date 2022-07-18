#include<stdio.h>
int main() 
{
    int a , b , c , d  ;
    printf("enter 3 numbers to add(can be +ve or -ve):");
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    printf("%d + %d + %d = %d",a,b,c,d);
    return 0;

}