//code for the grade from marks

#include<stdio.h>
int main ()
{
int grade ;
printf("enter the student's marks ");
scanf("%d",&grade);
if (grade>=90)
{
    printf("THE STUDENT GOT A++ GRADE");
}
else if (grade>=80)
{
    printf("THE STUDENT GOT A+ GRADE");
}
else if (grade>=70)
{
    printf("THE STUDENT GOT B GRADE");
}
else if (grade>=60)
{
    printf("THE STUDENT GOT C GRADE");
}
else if (grade>=50)
{
    printf("THE STUDENT GOT D GRADE");
}
else if (grade>=33)
{
    printf("THE STUDENT GOT E GRADE");
}
else
    printf("THE STUDENT GOT F GRADE");

}