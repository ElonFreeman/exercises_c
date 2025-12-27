#include <stdio.h>
#include <string.h>

int main()
{
    long long n;
    char num[15],result[20];
    char *p1,*p2;
    int len,count=0;
    
    scanf("%lld",&n);
    sprintf(num,"%lld",n);

    len=strlen(num);
    p1=num+len-1;
    p2=result+(len+(len-1)/3);

    *p2='\0';
    p2--;

    while(p1>=num)
    {
        *p2=*p1;
        p2--;
        p1--;
        count++;

        if(count%3==0&&p1>=num)
        {
            *p2=',';
            p2--;
        }
    }

    printf("%s\n",result+(p2-result+1));

    return 0;
}