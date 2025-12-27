union test1
{
    int i,j;
}te1;

struct test2
{
    int i,j;
}te2;


#include <stdio.h>
int main()
{
    te1.i=1;
    te1.j=2;
    te2.i=3;
    te2.j=4;

    printf("%d\n%d\n%d\n%d\n",te1.i,te1.j,te2.i,te2.j);
    return 0;
}
