//odd numbers from 1 to 75
#include<stdio.h>
int main ()
{
    for (int i=1;i<=75;i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;

    }
