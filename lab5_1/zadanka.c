#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1
#define null ((void*)0)

void zad3_2_4(int* a, int* b)
{
    if (*b < *a)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

void zad3_2_6(int n, int* w)
{
    *w = n;
}

double* zad3_2_10()
{
    return malloc(sizeof(double));
}

double* zad3_2_12(int n)
{
    if (n < 1)
    {
        printf("n must be higher than 0");
        return null;
    }

    return malloc(sizeof(n * sizeof(double)));
}

int main()
{
    if (false)
    {
        int a = 3;
        int b = 6;
        zad3_2_4(&a, &b);
        printf("%d %d", a, b);
    }

    if (false)
    {
        int a = 0;
        int* w = &a;
        zad3_2_6(5, w);
        printf("%d", a);
    }

    if (false)
    {
         double* a = zad3_2_10();
         *a += 1.0;
         printf("%f", *a);
    }

    if (true)
    {
        double* a = zad3_2_12(10);
        for (int i = 0; i < 10; ++i) printf("%f \n", *(a + i));
    }
}
