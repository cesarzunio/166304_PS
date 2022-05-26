#include <stdio.h>
#include <stdlib.h>

//Napisz wskaŸnikow¹ wersjê funkcji strcpyEven. Funkcja ta ma kopiowaæ co drugi znak z napisu s do napisu t. Zadbaj o koniec napisu - NUL.
char* strcpyEven(char *t, const char *s);

int main(void)
{
    char* kopia = calloc(50, sizeof(char));
    char napis[] = "tekst do skopiowania";

    strcpyEven(kopia, napis);

    printf("%s", kopia);
}

char* strcpyEven(char *t, const char *s)
{
    char* temp = t;

    while (*s)
    {
        *t = *s;
        ++t;
        s += 2;
    }

    *t = '\0';

    return temp;
}
