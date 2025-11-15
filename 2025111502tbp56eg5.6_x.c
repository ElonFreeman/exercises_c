#include <stdio.h>
int main ()
{
    int a[5][4]={
                {15,13,16,18},
                {25,23,26,28},
                {35,33,36,38},
                {45,43,46,48},
                {55,53,56,58}},
                b[5];
    int i,j,k,max=0;

    for(i=0,k=0;i<5&&k<5;i++,k++)
    {
        max=a[i][0];
        
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }

        b[k]=a[i][j];
        printf("%d  ",b[k]);

    }
    return 0;
}