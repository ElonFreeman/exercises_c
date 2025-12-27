#include<stdio.h>

int proce(int *parr)
{
    for(int i=0,j=9-i;i<j;i++,j=9-i)
    {
        int tmp;
        
        tmp=parr[i];
        parr[i]=parr[j];
        parr[j]=tmp;
    }

    return 0;
}


int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    proce(arr);

    return 0;
}