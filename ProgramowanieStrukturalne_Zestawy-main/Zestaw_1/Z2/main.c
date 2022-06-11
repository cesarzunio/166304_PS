#include <stdio.h>

int czySumaNpar(int n, const int tab1[], const int tab2[]);

int main() {
    int tablica1[] = {1,2,3,4};
    int tablica2[] = {1,9456,3,1154};
    printf("Wynik: %d", czySumaNpar(4, tablica1, tablica2));

    return 0;
}

int czySumaNpar(int n, const int tab1[], const int tab2[])
{
    int s1 = 0;
    int s2 = 0;
    for(int i = 0; i < n; i++)
    {
        int temp = tab[i];
            if(temp < 0)
                temp *= -1;
        if(temp % 2)
            s1 += tab1[i];
        
        int temp = tab2[i];
            if(temp < 0)
                temp *= -1;
        if(temp % 2)
            s2 += tab2[i];
    }
    if (s1 == s2)
        return 1;
    return 0;
}
