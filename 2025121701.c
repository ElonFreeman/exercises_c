#include <stdio.h>
int main()
{
    char *pwords[]={"A","B","C","D","E"};
    int nums[5]={0,1,2,3,4};
    int *pnums;

    pnums=nums;

    int i=0;
    while(i<5)
    {
        pnums+=1;
    }

    return 0;
}