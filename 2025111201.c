#include <stdio.h>
#define num 10
int main()
{
    int i,max,min,a[num]={99,89,100,23,45,67,78,34,23,56};//初始化数组，定义最值、遍历计数器
    max=min=a[0];

    for(i=0;i<num;i++)  //用于遍历数组中的所有元素
    {
        if(a[i]<min)  //每次的遍历的元素与当前的最值比较，a[i]用于访问数组中的元素，根据序列号访问
        {
            min=a[i];
        }

        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("max=%d,min=%d",max,min);
    return 0;
}