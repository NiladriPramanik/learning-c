#include <stdio.h>
#include <conio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr = 0;
    float per ;
    printf("\nEnter marks in 5 subjests:") ;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    aggr = m1+m2+m3+m4+m5 ;
    per = aggr/5.0 ;
    printf("Aggregate Marks =%d\n",aggr);
    printf("Percentage Marks = %.2lf\n",per);
    getch() ;
    return 0 ;
}