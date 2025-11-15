#include <stdio.h>
int main()
{
    int a[5][4] = {{15, 13, 16, 18}, {25, 23, 26, 28}, {35, 33, 36, 38}, {45, 43, 46, 48}, {55, 53, 56, 58}}, b[5];
    int i, j, max = 0;

    /*for(i=0;i<=4;i++)
    {
        max=a[i][0];

        for(j=0;j<=3;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }


        b[i]=max;
        printf("%d  ",b[i]);
    }*/

    int k = 0;
    for (i = 0, k = 0; i <= 4, k <= 4; i++, k++)
    {
        max = a[i][0];

        for (j = 0; j <= 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }

        b[k] = max;
        printf("%d  ", b[k]);
    }

    return 0;
}