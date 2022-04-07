#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe n > 0: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("n musi byc > 0");
        return -1;
    }

    int dodatnie = 0;
    int ujemne = 0;
    int zerowe = 0;

    for (int i = 0; i < n; ++i)
    {
        float input;
        printf("Podaj liczbe rzeczywista: ");
        scanf("%f", &input);

        if (input > 0.0f)
        {
            ++dodatnie;
        }
        else if (input < 0.0f)
        {
            ++ujemne;
        }
        else
        {
            ++zerowe;
        }
    }

    printf("Dodatnich: %d, ujemnych: %d, zerowych: %d", dodatnie, ujemne, zerowe);
}
