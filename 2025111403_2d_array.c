#include <stdio.h>
int main()
{
    int a[2][4]={
        {1,2,3,4},
        {5,6,7,8}},i,j;

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        
        printf("\n");
    }

    /*int arr[2][3] = {{1,2,3}, {4,5,6}};
    
    printf("Size of a_\n");
    printf("Whole array: %zu bytes\n", sizeof(arr));
    printf("A line: %zu bytes\n", sizeof(arr[0]));
    printf("A element: %zu bytes\n", sizeof(arr[0][0]));
    
    // 验证内存地址连续性
    printf("\nAddress_\n");
    printf("arr[0][0] : %p\n", &arr[0][0]);
    printf("arr[0][1] : %p\n", &arr[0][1]);
    printf("arr[0][2] : %p\n", &arr[0][2]);
    printf("arr[1][0] : %p\n", &arr[1][0]);*/
    
    return 0;
}