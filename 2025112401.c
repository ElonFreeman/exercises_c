#include <stdio.h>

int max(int x,int y)
{
    int z;

    if(x>y)
    {
        z=x;
    }

    else if(y>x)
    {
        z=y;
    }

    return z;
}

int main()
{
    float a=10,b=20,c=0;
    int max(int a,int b);

    c=max(a,b);
    printf("%f",c);

    return 0;
}

