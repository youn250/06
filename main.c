
#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int a = 5;
    int b = 3;

    printf("sumTwo = %d\n", sumTwo(a, b));
    printf("square = %d\n", square(a));
    printf("get_max = %d\n", get_max(a, b));

    return 0;
}

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
