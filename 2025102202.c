#include <stdio.h>
#include <math.h>

int main()


{
    float a,b,c;
    printf("Please enter three number:");
    scanf("%f%f%f",&a,&b,&c);

    float S,p;
    p=(a+b+c)/2;

    if(a+b>c&&a+c>b&&b+c>a)
    {
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("triangle S:%f",S);
    }

    else
        printf("It can not be a triangle!");   

    return 0;
}


/*
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // 清空所有字符直到换行符或文件结束
    }
}

void wait_for_enter(const char* prompt) {
    printf("%s", prompt);
    while (getchar() != '\n');  // 清空可能存在的字符
    getchar();  // 等待新的回车
}*/