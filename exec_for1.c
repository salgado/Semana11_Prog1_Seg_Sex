#include <stdio.h>

int main()
{
    int i;
    int num=0;
    
    for(i=1; i<=50;i++)
    {
        printf("%d, ", num);
        num = num + 2;
    }
    
    return 0;
}