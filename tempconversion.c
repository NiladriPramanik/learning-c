// code without function
#include <stdio.h>
int main()
{
float celsius, fahrenheit;
printf("Enter temperature in Celsius: ");
scanf("%f", &celsius);
fahrenheit = (celsius * 9 / 5) + 32;
printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
return 0;
}
//code with function below
// #include<stdio.h>
// float converttemp(float celsius);

// int main ()

// {
//     float far = converttemp(100);
//     printf("far:%f",far);
//     return 0;
// }
// float converttemp(float celsius){
//     float far = celsius *9.0/5.0 + 32;
//     return far ;
// }