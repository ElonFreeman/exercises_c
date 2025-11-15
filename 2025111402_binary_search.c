#include <stdio.h>
#define N 10
int main()
{
    int a[N]={0,1,2,3,4,5,6,7,8,9},num;
    int low=0,high=N-1,mid;

    printf("Which number do you want to search?:");
    scanf("%d",&num);

    while(low<=high)
    {
        mid=(low+high)/2;

        if(num>a[mid])
        {
            low=mid+1;
        }

        else if(num<a[mid])
        {
            high=mid-1;
        }

        else
        {
            printf("Got it!\nIt's on %d.\n",mid);
            break;
        }
    }

    if(low>high)
    {
        printf("Not found!");
    }


    return 0;
}