#include <stdio.h>
#include <stdlib.h>

void pierwsza_cyfra_test(int n)
{
    printf("Pierwsza cyfra %d to %d\n", n, pierwsza_cyfra(n));
}

int pierwsza_cyfra(int n)
{
    while (n / 10 != 0)
    {
        n /= 10;
    }

    return n;
}

int main()
{
    pierwsza_cyfra_test(300);
    pierwsza_cyfra_test(356);
    pierwsza_cyfra_test(331278);
    pierwsza_cyfra_test(0);
    pierwsza_cyfra_test(831);
    pierwsza_cyfra_test(5912);
    pierwsza_cyfra_test(99321);
}
