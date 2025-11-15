#include <stdio.h>
int main()
{
    int a[4][3],b[3][4],i,j;

    for(i=0;i>=0&&i<=3;i++)
    {
        for(j=0;j>=0&&j<=2;j++)
        {
            a[i][j]=i+j;
            printf("%d  ",a[i][j]);
        }

        printf("\n");
    }

    printf("\nswitch\n");

    for(i=0;i>=0&&i<=2;i++)
    {
        for(j=0;j>=0&&j<=3;j++)
        {
            b[j][i]=a[i][j]; 
            printf("%d  ",b[j][i]);
        }

        printf("\n");
    }

    return 0;
}