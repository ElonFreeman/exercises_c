#include <stdio.h>
#define n 5
int main()
{
    int nums[n]={2,4,6,8,10},target;
    int i,j;
    scanf("%d",&target);

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("[%d,%d]",i,j);
            }
        }
    }

    return 0;
}