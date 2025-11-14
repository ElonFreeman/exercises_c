#include <stdio.h>
int main()
{
    int a[40],n,j=0,i;
    
    printf("Please input how many students:");
    scanf("%d",&n);

    if(n>40)
    {
        printf("Illegal input!");
        return 1;
    }

    printf("Please input score:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>60)
        {
            printf("%6d",a[i]);
            j++;

            if(j%5==0)
            {
                printf("\n");
            }
        }
    }

    printf("\npass:%6d",j);

    return 0;
}