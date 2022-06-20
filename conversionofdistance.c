#include <stdio.h>
#include <conio.h>
int main()
{
    float km , m , cm , inch , ft ;
    printf("\nEnter the Distance in KiloMeters: ");
    scanf("%f",&km);
    m=km*1000 ;
    cm=m*100 ; 
    inch=cm/2.54 ;
    ft=inch/12 ;
    printf("Distance in Meters = %f\n",m);
    printf("Dictance in Centimeter =%f\n",cm);
    printf("Distance in inch =%f\n",inch);
    printf("Distance in Feet = %f\n",ft);
    getch();
    return 0 ;
}

