//code for age 
#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    age>=18 && age>60 ? printf("an adult\n") : printf("not an adult\n");

    return 0;
}
