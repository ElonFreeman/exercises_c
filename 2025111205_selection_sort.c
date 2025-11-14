#include <stdio.h>
#define num 5
int main()
{
    int i,j,k,tmp,a[num];
    printf("Please input %d nums:",num);

    for(i=0;i<num;i++)  //向数组中填入数据
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<num-1;i++)  //外层：总趟数为元素数减一
    {
        k=i;  //标记元素位置，元素位置数与当前趟数相同

        for(j=i+1;j<num;j++)  //内层：遍历数组未排序的部分，找标记位置后面比标记位置小且最小的数
        {
            if(a[j]<a[k])  //发现后面有数符合条件，记录其下标
            {
                k=j;  //每次在无序部分中找到更小的就会执行标注
            }
        }

        if(k!=i)  //若最小数不在标记位置，交换值
        {
            tmp=a[k];
            a[k]=a[i];
            a[i]=tmp;
        }
    }

    for(i=0;i<num;i++)  //输出有序列
    {
        printf("%6d",a[i]);
    }

    return 0;
}