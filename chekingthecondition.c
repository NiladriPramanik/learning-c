//code for identifying 2 digits number
//yes then print 1
//no then print 0
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    printf("%d\n",x>9 && x<100 );
    return 0;

}