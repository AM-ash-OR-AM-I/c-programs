#include <stdio.h>
int fun(int n, int *f_p)
{
    int t, f;
    if (n <= 1)
    {
        *f_p = 1;
        return 1;
    }
    t = fun(n - 1, f_p);
    f = t + *f_p;
    *f_p = t;
    return f;
}

int main()
{
    int x = 15;
    printf("%d\n", fun(5, &x));
    return 0;
}