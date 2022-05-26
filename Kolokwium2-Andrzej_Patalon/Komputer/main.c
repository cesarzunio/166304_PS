#include <stdio.h>
#include "komputer.h"
#include <string.h>

bool czyPrawidlowaCena (double cena);
bool czyPrawidlowyWiek (int ileMaLat);

int main(int argc, char *argv[])
{
    // 1) Poproœ u¿ytkownika o wpisanie danych. Zabezpiecz dane! 1981 r. uznaje siê za pocz¹tek ery komputerów IBM PC -
    //komputerów osobistych. Zak³adamy, ¿e cena powinna byæ z zakresu od 0 do 10000 z³. Napisz odpowiednie funkcje sprawdzaj¹ce poprawnoœæ danych.

    char nazwa[MAX_LEN - 1];
    double cena;
    int ileMaLat;
    int czyLaptopInt;
    bool czyLaptop;

    printf("Podaj nazwe komputera: ");
    scanf("%s", nazwa);
    printf("Podaj cene: ");
    scanf("%lf", &cena);
    printf("Podaj wiek komputera: ");
    scanf("%d", &ileMaLat);
    printf("Czy jest to laptop? (1 jesli tak, cokolwiek innego jesli nie): ");
    scanf("%d", &czyLaptopInt);
    czyLaptop = czyLaptopInt == 1;

    bool zleDane = false;
    if (!czyPrawidlowaCena(cena))
    {
        printf("Podana cena jest nieprawidlowa!\n");
        zleDane = true;
    }
    if (!czyPrawidlowyWiek(ileMaLat))
    {
        printf("Podany wiek jest nieprawidlowy!\n");
        zleDane = true;
    }
    if (zleDane) return -1;

    // 2) Zainicjalizuj strukturê o nazwie komp1 wprowadzonymi danymi.

    Komputer komp1 = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);

    // 3) Stwórz strukturê o nazwie komp2 kopiuj¹c obiekt komp1.

    Komputer komp2 = makeKomputerCopy(&komp1);

    // 4) Stwórz strukturê o nazwie komp3 kopiuj¹c obiekt komp1.

    Komputer komp3 = makeKomputerCopy(&komp1);

    // 5) Zmieñ nazwê komputera komp1 na Dell

    strcpy(komp1.nazwa, "Dell");

    // 6) Zmieñ nazwê komputera komp2 na Lenovo

    strcpy(komp2.nazwa, "Lenovo");

    // 7) Zmieñ nazwê komputera komp3 na Asus

    strcpy(komp3.nazwa, "Asus");

    // 8) Zmieñ wiek komputera komp2 na 22 lata

    komp2.ileMaLat = 22;

    // 9) Zmieñ czyLaptop komputera komp3 na true

    komp3.czyLaptop = true;

    // 10) Postarz komputer komp1 o 3 lata

    postarz(&komp1, 3);

    // 11) Wypisz informacje o obiektach komp1, komp2, komp3

    show(&komp1);
    show(&komp2);
    show(&komp3);

    // 12) stwórz tablicê o nazwie tab trzech komputerów

    Komputer tab[3];

    // 13) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // PrzejdŸ tablicê i wype³nij j¹ komputerami uzywaj¹c odpowiedniej funkcji.

    for (Komputer *p = tab; p < tab + 3; ++p)
    {
        *p = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);
    }

    // 14) W pêtli for do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników, a ka¿dy operator indeksowania nale¿y zastapiæ operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Komputer znajduj¹cych sie w tablicy tab

    for (Komputer *p = tab; p < tab + 3; ++p)
    {
        show(p);
    }

    return 0;
}

bool czyPrawidlowaCena(double cena)
{
    return cena >= 0.0 && cena <= 10000.0;
}

bool czyPrawidlowyWiek(int ileMaLat)
{
    return ileMaLat >= 0 && ileMaLat <= 41;
}
