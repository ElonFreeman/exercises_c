#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x, r = 0, sum = 0, box;
    scanf("%d", &x);
    box = x;

    if (x < 0)
    {
        return false;
    }

    while (x > 0)
    {
        r = x % 10;
        sum *= 10;
        sum += r;
        x = x / 10;
    }

    if (sum == box)
    {
        return true;
    }

    if (sum != box)
    {
        return false;
    }

    // return 0;
}