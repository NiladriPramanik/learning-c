//print all numbers from 1 to 10 except number 5
#include <stdio.h>

int main() {
    for(int i=1;i<=10;i++)
    {
        if (i==5){
        continue;
    }
    printf("%d\n",i);
}
    return 0;
}