// giving grades to a student 
#include<stdio.h>
int main ()
{
    int grade ;
    printf("Enter the marks of the student(0-100):");
    scanf("%d",&grade);
    if (grade<30 && grade>=0)
    {
        printf("C\n");
    }
    else if (grade>=30 && grade<70)
    {
        printf("B\n");
    }
    else if (grade>=70 && grade<90)
    {
        printf("A\n");
    }
    else if (grade>=90 && grade<=100)
    {
        printf("A+\n");
    }
    else 
    printf("invalid input\n");
    return 0;

}