
#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n, r, result;

    printf("Input n: ");
    n = get_integer();

    printf("Input r: ");
    r = get_integer();

    if (n < 0 || r < 0 || r > n)
    {
        printf("Invalid input\n");
        return 0;
    }

    result = combination(n, r);

    printf("Combination = %d\n", result);

    return 0;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

int get_integer(void)
{
    int num;

    scanf("%d", &num);

    return num;
}
