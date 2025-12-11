#include <stdio.h>

void swap(int *pa,int *pb) 
{
    int tmp;

    tmp=*pa;
    *pa=*pb;
    *pb=tmp;
}


int main()
{
    int a=2,b=4;
    int *pa=&a,*pb=&b;
    
    printf("%d %d\n",a,b);

    swap(pa,pb);

    printf("%d %d\n",a,b);

    return 0;
}