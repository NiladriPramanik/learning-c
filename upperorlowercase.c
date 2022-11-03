#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the english letter:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
        printf("The letter is upper case.");
    }
    else if (ch>='a' && ch<='z' )
    {
        printf("The letter is lower case.");
    }
    else 
    {
       printf("It is not an english alphabate.");
    }
    return 0;
}