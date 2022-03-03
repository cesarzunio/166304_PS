#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //zad1_2_3();
    //zad1_2_8();
    //zad1_2_10();
    //zad1_3_3();
    //zad1_3_7();
    zad1_3_9();
}

void zad1_2_3()
{
    printf("// \\ \\ $ & %%");
}

void zad1_2_8()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%d", (a + b + c) / 3);
}

void zad1_2_10()
{
    double a;

    scanf("%lf", &a);

    //if (a < 0.0) a = -a;

    printf("%lf", fabs(a));
}

void zad1_3_3()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", max3(a, b, c));
}

int max3(int a, int b, int c)
{
    if (a >= b)
        if (a >= c) return a;
        else return c;
    else
        if (b >= c) return b;
        else return c;
}

void zad1_3_7()
{
    float a, b, c;
    float delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0.0f) printf("No viable solution!");
    else
    {
        if (delta == 0.0f) printf("x0 = %f", -b / 2 * a);
        else
        {
            float deltaSqrt = sqrtf(delta);
            float x1 = (-b - deltaSqrt) / 2 * a;
            float x2 = (-b + deltaSqrt) / 2 * a;
            printf("x1 = %f \nx2 = %f", x1, x2);
        }
    }
}

void zad1_3_9()
{
    int a, b;
    char znak;

    printf("Gimmie a, b and sign of an arithmetic operation: \n");
    scanf("%d %d %c", &a, &b, &znak);

    switch(znak)
    {
        case '+':
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d", a, b, a * b);
            break;
        case 47:
            if (b == 0) printf("b = 0, cannot divide!");
            else printf("%d / %d = %d", a, b, a / b);
            break;
        default:
            printf("Wrong sign bruh");
            break;
    }
}
