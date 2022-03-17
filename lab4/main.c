#include <stdio.h>
#include <stdlib.h>

void zad2_2_3()
{
    int n;
    printf("Gimmie number: ");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Number must be higher than 2");
        return;
    }

    for (int k = 2; k <= n; ++k)
    {
        if (n % k == 0)
        {
            printf("Largest: %d", n / k);
            return;
        }
    }
}

int zad2_2_4(int a)
{
    if (a < 0)
    {
        printf("Number must be higher than 0");
        return -1;
    }

    if (a == 0) return 1;

    return 2 * zad2_2_4(a - 1);
}

int zad2_2_7(int n, int m)
{
    if (m < 0 || n < 0 || (m == 0 && n == 0))
    {
        printf("One of the arguments must not be equal to 0");
        return -1;
    }

    if (m == 0) return 1;

    return n * zad2_2_7(n, m - 1);
}

void zad2_2_17(int isPrint)
{
    static int count = 0;

    count++;

    if (isPrint == 1) printf("%d", count);
}

int zad2_2_21(int n)
{
    if (n < 0)
    {
        printf("Number must be higher than 0");
        return -1;
    }

    if (n == 0) return 1;

    return 2 * zad2_2_21(n - 1) + 5;
}

void wsk1()
{
    int a = 6;
    int* p = &a;

    printf("%d \n", *p); // wartoœæ przechowywana w adresie a
    printf("%d \n", &p); // adres zmiennej p
    printf("%d \n", *&p); // wartosc w adresie p?? o 4 bajty wiekszy
    printf("%d \n", &*p); // adres wskaznika?? to samo co wyzej
    printf("%d \n", &a); // adres zmiennej a
    printf("%d \n", *&a); // dereferencja, wartosc zmiennej a
}

int wsk2()
{
    int a = 3;
    int* p;
    int* q;

    p = a;
    //*p = &a; // niepoprawna
    //&p = q; // niepoprawna
    p = &q;
    p = *&q;
    p = q;
    p = *q;
    //*p = q; // niepoprawne
    //*p = *q; // niepoprawne
}

int wsk3(int* a, int* b)
{
    if (*a < *b) return *a;
    return *b;
}

int main()
{
    //zad2_2_3();
    //printf("%d", zad2_2_4(4));
    //printf("%d", zad2_2_7(3, 2));
    //for (int i = 10; i > 0; --i) zad2_2_17(i);
    //printf("%d", zad2_2_21(3));
    //wsk1();
    //wsk2();
    {
        //int a = 6;
        //int b = 4;
        //printf("%d", wsk3(&a, &b));
    }
}
