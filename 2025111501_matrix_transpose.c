#include <stdio.h>
int main()
{
    int a[4][3],b[3][4],i,j;

    for(i=0;i<4;i++)  //填充数组（矩阵）
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=i+j;
            printf("%d  ",a[i][j]);
        }

        printf("\n");
    }

    printf("\nswitch\n");

    for(i=0;i<4;i++)  //转置
    {
        for(j=0;j<3;j++)
        {
            b[j][i]=a[i][j];  //转置操作，每个元素交换自己的行地址和列地址
        }
    }

    for(i=0;i<3;i++)  //输出转制后的矩阵
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",b[i][j]);
        }

        printf("\n");
    }

    return 0;
}