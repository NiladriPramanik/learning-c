#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter the student's marks (0-100):");
    scanf("%d",&marks) ;
    if (marks<=30 && marks>=0)
    {
        printf("student is failed");
    }
    else if (marks>30 && marks<=100)
    {
        printf("student is passed");
    }
    else
    { 
        printf("invalid input");
    }
    // using ternary operator 
    // marks >=30 ? printf("passed\n"):printf("failed\n");
    return 0; 

}