#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number for the table :");
    scanf("%d",&n);
    for (int i=1;i<=20;i++)
    {
printf("%d\n",n*i);
    }
    return 0;
    
}