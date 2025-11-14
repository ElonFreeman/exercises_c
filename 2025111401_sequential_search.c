#include <stdio.h>
#define num 5
int main ()
{
    int a[num],i,m,flag;

    printf("Please fill the the array:\n");  //填充数组
    for(i=0;i<=num-1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Which num do you want to find?:");  //输入要查找的项
    scanf("%d",&m);

    /*i=0;  //初始化计数器，启动遍历查找
    while(i<=num-1)
    {
        if(a[i]==m)
        {
            flag=1;  //状态指示器
            printf("Got it!\nIt's on %d.\n",i);
            i++;
        }

        else
        {
            i++;
        }
    }*/

    for(i=0;i<=num-1;i++)
    {
        if(a[i]==m)
        {
            flag=1;  //状态指示器
            printf("Got it!\nIt's on %d.\n",i);
        }
    }

    if (flag!=1)  //状态指示器未激活，则表明查找对象不存在
    {
        printf("the num not found!");
    }

    return 0;
}