#include<stdio.h>
int main()
{
    int age=6;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d",_age);
    return 0;
}
