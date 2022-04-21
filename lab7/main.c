#include <stdio.h>
#include <stdlib.h>

void zad6_2_11(int tab[][100], int n)
{
    int sum = 0;

    for (int y = 0; y < 100; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            sum += tab[x][y];
        }
    }

    printf("%d\n", sum);
}

void zad6_2_12(int tab[][100], int n, int m)
{
    int sum = 0;

    for (int y = 0; y < m; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            sum += tab[x][y];
        }
    }

    printf("%d\n", sum);
}

void zad6_2_18(int tab[][100], int n, int m)
{
    for (int y = 0; y < m; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            printf("%2d", tab[x][y]);
        }

        printf("\n");
    }
}

int main()
{
    int n = 10;
    int m = 10;
    int tab[10][100];

    for (int y = 0; y < 100; ++y)
    {
        for (int x = 0; x < n; ++x)
        {
            tab[x][y] = x % (y + 1);
        }
    }

    //zad6_2_11(tab, n);
    //zad6_2_12(tab, n, m);
    zad6_2_18(tab, n, m);
}
