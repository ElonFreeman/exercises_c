#include <stdio.h>
#define num 10
int main()
{
    int i,j,tmp,a[num];
    printf("Please input %d numbers:",num);

    for(i=0;i<num;i++)  //向数组内填入指定数目的数字
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<num-1;i++)  //外层：总趟数为元素数减一
    {
        for(j=0;j<num-1-i;j++)  //内层：趟内排序次数为元素数减i减一
        {
            if(a[j]>a[j+1])  //若前项大于后项，交换值
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    for(i=0;i<num-1;i++)  //输出有序列
    {
        printf("%6d",a[i]);
    }

    return 0;
}