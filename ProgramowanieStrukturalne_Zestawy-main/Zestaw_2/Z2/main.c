#include <stdio.h>

int sum(unsigned int n, int tab[]);

int main() {
    int tab[] = {1, 2, 3, 45, 6, 3};
    printf("Suma: %d", sum(5, tab));
    return 0;
}

int sum(unsigned int n, int tab[])
{
    if (n == 0)
        return tab[0];
    return tab[n] + sum(n-1, tab);
}