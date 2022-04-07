#include <stdio.h>
#include <stdlib.h>

float funkcja(int n, int m)
{
    if (n == 0) return 0;
    if (m == 0) return 1;

    if (m > 0)
    {
        int n_base = n;
        for (int i = 1; i < m; ++i) n *= n_base;
        return (float)n;
    }

    // m < 0
    m = -m;
    float n_f = 1.0f / (float)n;
    float n_base = n_f;
    for (int i = 1; i < m; ++i) n_f *= n_base;
    return n_f;
}

int main()
{
    int a, b;
    printf("Podaj n: ");
    scanf("%d", &a);
    printf("Podaj m: ");
    scanf("%d", &b);

    if (a == 0 && b == 0)
    {
        printf("Co najmniej jedna z nich musi byc nie-zerowa");
        return -1;
    }

    printf("%d^%d = %f", a, b, funkcja(a, b));
}
