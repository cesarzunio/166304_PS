#include <stdio.h>
#include <stdlib.h>

int sgn(double x)
{
    if (x > 0.0) return 1;
    return -1;
}

double najmniejsza(double a, double b, double c)
{
    if (a < b)
    {
        if (a < c) return a;
    }
    else
    {
        if (b < c) return b;
    }

    return c;
}

double srednia(double a, double b, double c)
{
    return (a + b + c) / 3.0;
}

double potega(double a, int p)
{
    double result = a;

    for (int i = 1; i < p; ++i) result *= a;

    return result;
}

int pierwsza_cyfra(int a)
{
    if (a < 0) a = -a;

    while (a > 10)
    {
        a /= 10;
    }

    return a;
}

int ostatnia_cyfra(int a)
{
    return a % 10;
}

int ile_cyfr(int a)
{
    int n = 0;

    while (a != 0)
    {
        a /= 10;
        ++n;
    }

    return n;
}

double oprocentowanie(double startCash, double interest, int yrs)
{
    for (int i = 0; i < yrs; ++i) startCash *= (1.0 + interest / 100.0);

    return startCash;
}

int nwd(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

void zad2_5_a()
{
    int n;
    printf("Gimmie 1 number:\n");
    scanf("%d", &n);

    for (int i = 1; i < n; ++i)
    {
        if (nwd(i, n) == 1) printf("%d ", i);
    }
}

void zad2_5_b()
{
    int n;
    int result;
    printf("Gimmie 1 number:\n");
    scanf("%d", &n);

    for (int i = 1; i < n; ++i)
    {
        if (n % i == 0) result += i;
    }

    if (n == result) printf("%d IS a PERFECT number!", n);
    else printf("%d is NOT a perfect number... ", n);
}

int main()
{
    //zad1_4_2();
    //zad1_4_6();
    //zad1_4_11_a();
    //zad1_4_11_b();
    //zad1_4_11_c();
    //zad1_4_14();
    //printf("%d", sgn(-5.0));
    //printf("%lf", najmniejsza(2.0, -3.0, 5.0));
    //printf("%lf", srednia(1.0, 2.0, 4.0));
    //printf("%lf", potega(2.5, 3));
    //printf("%d", pierwsza_cyfra(321));
    //printf("%d", ostatnia_cyfra(324));
    //printf("%d", ile_cyfr(9100));
    //printf("%lf", oprocentowanie(1000, 5, 2));
    //printf("%d", nwd(90, 60));
    //zad2_5_a();
    zad2_5_b();

}

void zad1_4_2()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n < 0 || m < 0)
    {
        printf("Wrong numbers lol");
        return;
    }

    for (int i = 0; i < m; ++i)
    {
        printf("%d ", n * (i + 2));
    }
}

void zad1_4_6()
{
    int n;
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Wrong number lol");
        return;
    }

    int result = 1;

    for (int i = 2; i <= n; i += 2)
    {
        result *= i;
    }

    printf("Result: %d", result);
}

void zad1_4_11_a()
{
    int a, b, c, d;
    printf("Gimmie 4 numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int result = 0;
    int maxResult = 100000;

    if (a < 0) a = -a;

    while (result < maxResult)
    {
        if (a * result * result + b * result + c > d)
        {
            printf("%d", result);
            return;
        }

        ++result;
    }

    printf("No result found < %d", maxResult);
}

void zad1_4_11_b()
{
    int a, b, c;
    printf("Gimmie 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    int result = 0;
    int maxResult = 100000;

    while (result < maxResult)
    {
        if (5 * result * result + a * result + b < c)
        {
            printf("%d", result);
            return;
        }

        ++result;
    }

    printf("No result found < %d", maxResult);
}

void zad1_4_11_c()
{
    int a, b, c;
    printf("Gimmie 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    int result = 0;
    int maxResult = 100000;

    while (result < maxResult)
    {
        if (5 * result * result + a * result + b <= c)
        {
            printf("%d", result);
            return;
        }

        ++result;
    }

    printf("No result found < %d", maxResult);
}

void zad1_4_14()
{
    int n;
    printf("Gimmie 1 number: \n");
    scanf("%d", &n);

    for (int a = 0; a < n; ++a)
    {
        for (int b = 0; b < n; ++b)
        {
            for (int c = 0; c < n; ++c)
            {
                if (a * a + b * b == c * c) printf("%d^2 + %d^2 == %d^2\n", a, b, c);
            }
        }
    }
}

