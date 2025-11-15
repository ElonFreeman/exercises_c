#include <stdio.h>
int main()
{
    int a[5][3],b[3][4],c[5][4]={};
    int i,j;

    for(i=0;i<5;i++)  //填充矩阵a
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=i+j;
            printf("%5d",a[i][j]);
        }

        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)  //填充矩阵b
    {
        for(j=0;j<4;j++)
        {
            b[i][j]=i-j; 
            printf("%5d",b[i][j]);
        }
        
        printf("\n");
    }

    printf("\n");

    int r;
    for(i=0;i<5;i++)  //矩阵乘法器
    {
        for(j=0;j<4;j++)
        {
            for(r=0;r<3;r++)
            {
                c[i][j]+=a[i][r]*b[r][j];
            }
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%5d",c[i][j]);
        }

        printf("\n");
    }

    return 0;
}