#include <stdio.h>

int main()
{
    int *p, i, a[10];
    p = a;
    
    for (i = 0; i < 10; i++)
    {
        *p++ = i;
    }

    p = a;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *p++);
    }

    return 0;
}