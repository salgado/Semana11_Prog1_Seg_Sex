#include <stdio.h>
int main()
{
    int num;
    num = 1;
    
    while(num < 100)
    {
        if ( num%2 == 1 )
        {
            printf("%d - ", num);
        }
        num++; //num = num +1;
    }
    
    return 0;
}