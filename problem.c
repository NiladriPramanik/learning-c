#include <stdio.h>

int func() {
    int count = 0;
    int num = 435;
    while(num)
    {
        count++;
        num>>1;
    }
    printf("%d", count);
    return 0;
    
}

int main()
{

func();

return 0;
}

