#include <stdio.h>
#include <conio.h>

int main()
{
    float bp , da  ,hra , gp ;
    printf ("\nEnter Basic Salary of Ramesh:");
scanf ("%f",&bp );
da=bp*0.4 ;
hra=bp*0.2;
gp=bp+da+hra ;
printf("Basic Salary of Ramesh = %f\n" , bp ) ;
printf("Darkness allowance = %f\n" , da) ;
printf ("House Rent allowence = %f\n" , hra );
printf("Gross Pay of Ramesh =%f\n" ,gp);
getch();
return 0;
}