#include <stdio.h>
#include <math.h>
int main ()
{
    int n,r,t,s=0,s2=0;
    scanf("%d",&n);
    
    while(n>0)
    {
        r=n%10;
        s=s+pow(r,2);
        n=n/10;
    }
    
    printf("%d\n",s);

    //while(s>10)
    //{
        while(s>1)
        {
            t=s%10;
            s2=s2+pow(t,2);
            s=s/10;
        }
    //}

    printf("%d\n",s2);

    /*if()
    {

    }*/
    return 0;
}