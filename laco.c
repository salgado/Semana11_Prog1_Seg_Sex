#include <stdio.h>
int main()
{
    int i;
    
    for(i=1; i<= 10;i++)
    {
        printf("\n antes %d", i);
        
        if (i>5)
        {
            continue;
        }
        printf("\n linha %d", i);
        
    }
    return 0;
}