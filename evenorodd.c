//a number is even or odd

#include<stdio.h>
#include<math.h>
int main()
{
    int x ;
    //even , output is 1
    //odd , output is 0
    printf("enter a number:");
    scanf("%d",&x);
    printf("%d", x%2==0);
    return 0;

}
