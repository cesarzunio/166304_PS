#include <stdio.h>

typedef struct Osoba
{
    char imie[20];
    int wiek;
    float wzrost;
} Osoba;

char* najwyzszy(int n, Osoba tabOsob[]);

int main() {
    Osoba tablica[] = {{"Michal", 21, 1.79}, {"Agata", 24,1.76}, {"Szymon", 23, 1.91}};
    printf("Najwyzszy: %s", najwyzszy(3, tablica));

    return 0;
}

char* najwyzszy(int n, Osoba tabOsob[])
{
    float max = 0;
    int result;
    for(int i = 0; i < n; i++)
    {
        if(tabOsob[i].wzrost > max)
        {
            max = tabOsob[i].wzrost;
            result = i;
        }
    }
    return tabOsob[result].imie;
}