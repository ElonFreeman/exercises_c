#include<stdio.h>
int main()
{
    int a;
      
        a=2;
        
        

      a%=4-1;
      
      a+=a*=a-=a*=3;  //连续赋值
        printf("%d\n",a);

    return 0;
}