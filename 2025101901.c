#include<stdio.h>

int main(void)
{
    int 
    cookies=5,  //初始饼干数量
    cookie_calories=125,  //每块的卡路里
    total_eaten=0;


    int 
    eaten=0;

    printf("how many cookies did you eat? \n");
    scanf("%d",&eaten);  //输入吃掉的饼干数量
    
    cookies=cookies-eaten;  //剩余饼干数量
    total_eaten=total_eaten+eaten;  //总共吃了多少

    printf("\nI have eaten %d cookies. There are %d cookies left.",eaten,cookies);
    

    eaten=3;
    cookies=cookies-eaten;
    total_eaten=total_eaten+eaten;

    printf("\nI have eaten %d more.Now there are %d cookies left.\n",eaten,cookies);
    printf("Total energy consumed is %d calories.\n",total_eaten*cookie_calories);


    return 0;
}