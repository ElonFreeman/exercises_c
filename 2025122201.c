#include <stdio.h>

int main()
{
    struct fuckstru
    {
        char num[20];
        char name[20];
        int score;
    }stu1={"0001","dick",0},stu2;

    struct fuckstru stu3,stu4;

    stu2.num[1]='0';
    stu2.name[0]='5';

    return 0;
}