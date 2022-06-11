#include <stdio.h>

int checkAscii(char* s1, char* s2, int n);

int main() {
    char* n1 = "Agaaa";
    char* n2 = "Rnata";
    printf("Wynik: %d\n", checkAscii(n1, n2, 3));
    return 0;
}

int checkAscii(char* s1, char* s2, int n)
{
    int l1 = 0;
    int l2 = 0;
    char* t1 = s1;
    char* t2 = s2;
    while (*t1 != '\0')
    {
        l1++;
        t1++;
    }
    while (*t2 != '\0')
    {
        l2++;
        t2++;
    }
    if (l1 != l2)
        return 0;
    if (*(s1 + n) < *(s2 + n))
        return 1;
    return 0;
}