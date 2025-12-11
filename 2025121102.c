#include <stdio.h>

void swap(int *pa,int *pb)
{
    int *tmp;
    tmp=pa;
    pa=pb;
    pb=tmp;

}

int main()
{
    int a=2,b=4;

    return 0;
}