#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define false 0
#define true 1
#define null ((void*)0)

#define N 1000

void printTab(int* p, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%5d ", *(p + i));
    }

    printf("\n");
}

void zad1a()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        else if (*p % 2 == 1)
        {
            *p = 3 * (*p) + 1;
        }
        else
        {
            do
            {
                *p /= 2;
            }
            while (*p % 2 == 0);
        }
    }

    printTab(tab, n);
}

void zad1b()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 1) *p *= 2;
        else *p = -(*p);
    }

    printTab(tab, n);

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p < 0) *p = -1;
        else if (*p > 0) *p = 1;
        else *p = 0;
    }

    printTab(tab, n);
}

void zad1c()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------


    int left, right;
    printf("Gimmie left >= 0 && < n: ");
    scanf("%d", &left);
    printf("Gimmie right >= 0 && < n && > left: ");
    scanf("%d", &right);

    if (left < 0 || right < 0 || left >= n || right >= n || right <= left)
    {
        printf("Wrong numbers bud");
        return;
    }

    int distance = right - left;

    for (int* p1 = tab, *p2 = tab + distance; p1 < tab + distance / 2; ++p1, --p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    printTab(tab, n);
}

void zad1d()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    int even = 0;
    int uneven = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 0) ++even;
        else ++uneven;
    }

    printf("Evens: %d, unevens: %d", even, uneven);
}

void zad1e()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    int highestNumber = INT_MIN;
    int highestNumberCount = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p > highestNumber) highestNumber = *p;
    }

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p == highestNumber) ++highestNumberCount;
    }

    printf("Highest number: %d, count: %d", highestNumber, highestNumberCount);
}

void collatz(int tab[], int n)
{
    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p <= 0)
        {
            continue;
        }
        else if (*p % 2 == 1)
        {
            *p = 3 * (*p) + 1;
        }
        else
        {
            do
            {
                *p /= 2;
            }
            while (*p % 2 == 0);
        }
    }
}

void zad2a()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    collatz(tab, n);

    printTab(tab, n);
}

void zmien(int tab[], int n)
{
    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 1) *p *= 2;
        else *p = -(*p);
    }
}

void signum(int tab[], int n)
{
    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p < 0) *p = -1;
        else if (*p > 0) *p = 1;
        else *p = 0;
    }
}

void zad2b()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 1) *p *= 2;
        else *p = -(*p);
    }

    zmien(tab, n);

    printTab(tab, n);

    signum(tab, n);

    printTab(tab, n);
}

void odwroc(int tab[], int left, int right)
{
    int distance = right - left;

    for (int* p1 = tab, *p2 = tab + distance; p1 < tab + distance / 2; ++p1, --p2)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}

void zad2c()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------


    int left, right;
    printf("Gimmie left >= 0 && < n: ");
    scanf("%d", &left);
    printf("Gimmie right >= 0 && < n && > left: ");
    scanf("%d", &right);

    if (left < 0 || right < 0 || left >= n || right >= n || right <= left)
    {
        printf("Wrong numbers bud");
        return;
    }

    odwroc(tab, left, right);

    printTab(tab, n);
}

int ileParzystych(const int tab[], int n)
{
    int count = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 0) ++count;
    }

    return count;
}

int ileNieparzystych(const int tab[], int n)
{
    int count = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p % 2 == 1) ++count;
    }

    return count;
}

void zad2d()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    int even = ileParzystych(tab, n);
    int uneven = ileNieparzystych(tab, n);

    printf("Evens: %d, unevens: %d", even, uneven);
}

int ileMaksymalnych(const int tab[], int n)
{
    int highestNumber = INT_MIN;
    int highestNumberCount = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p > highestNumber) highestNumber = *p;
    }

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p == highestNumber) ++highestNumberCount;
    }

    return highestNumberCount;
}

void zad2e()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    srand(time(null));

    int tab[N];

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % 100 - 50;
    }

    printTab(tab, n);

    // ---------------------------------------

    int highestNumberCount = ileMaksymalnych(tab, n);

    printf("Highest number count: %d", highestNumberCount);
}

void generuj(int tab[], int n, int minValue, int maxValue)
{
    srand(time(null));

    int range = maxValue - minValue;

    for (int* p = tab; p < tab + n; ++p)
    {
        *p = rand() % range + minValue;
    }
}

int ileDodatnich(const int tab[], int n)
{
    int count = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p > 0) ++count;
    }

    return count;
}

int ileUjemnych(const int tab[], int n)
{
    int count = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p < 0) ++count;
    }

    return count;
}

int ileZerowych(const int tab[], int n)
{
    int count = 0;

    for (int* p = tab; p < tab + n; ++p)
    {
        if (*p == 0) ++count;
    }

    return count;
}

void zad3a()
{
    // -------------------------------------

    int n;
    printf("Gimmie number >= 0 && < 1000: ");
    scanf("%d", &n);

    if (n < 0 || n > N - 1)
    {
        printf("Wrong number");
        return;
    }

    int tab[N];

    generuj(tab, n, -99, 99);

    printTab(tab, n);

    // --------------------------------------

    int dodatnie = ileDodatnich(tab, n);
    int ujemne = ileUjemnych(tab, n);
    int zerowe = ileZerowych(tab, n);

    printf("Dodatnich: %d, Ujemnych: %d, Zerowych: %d", dodatnie, ujemne, zerowe);
}

int main()
{
    if (false) zad1a();
    if (false) zad1b();
    if (false) zad1c();
    if (false) zad1d();
    if (false) zad1e();

    if (false) zad2a();
    if (false) zad2b();
    if (false) zad2c();
    if (false) zad2d();
    if (false) zad2e();

    if (true) zad3a();
}
