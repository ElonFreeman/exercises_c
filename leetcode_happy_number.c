#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main ()
{
    int n,s0=0;
    int s1=0;
    scanf("%d",&n);

    while(n>0)
    {
        s0+=pow((n%10),2);
        n=n/10;
    }
    //printf("%d\n",s0);

    while (1)
    {
        while(s0>0)
        {
            s1+=pow((s0%10),2);
            s0=s0/10;
        }
        //printf("%d\n",s1);

        if(s1==1)
        {
            printf("bingo!");
            return true; 
        }
        if(s1==4)
        {
            printf("!");
            return false;
        }

        s0=s1;
        s1=0;
    }
}