#include <stdio.h>
#include "komputer.h"
#include <string.h>

bool czyPrawidlowaCena (double cena);
bool czyPrawidlowyWiek (int ileMaLat);

int main(int argc, char *argv[])
{
    // 1) Popro� u�ytkownika o wpisanie danych. Zabezpiecz dane! 1981 r. uznaje si� za pocz�tek ery komputer�w IBM PC -
    //komputer�w osobistych. Zak�adamy, �e cena powinna by� z zakresu od 0 do 10000 z�. Napisz odpowiednie funkcje sprawdzaj�ce poprawno�� danych.

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

    // 2) Zainicjalizuj struktur� o nazwie komp1 wprowadzonymi danymi.

    Komputer komp1 = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);

    // 3) Stw�rz struktur� o nazwie komp2 kopiuj�c obiekt komp1.

    Komputer komp2 = makeKomputerCopy(&komp1);

    // 4) Stw�rz struktur� o nazwie komp3 kopiuj�c obiekt komp1.

    Komputer komp3 = makeKomputerCopy(&komp1);

    // 5) Zmie� nazw� komputera komp1 na Dell

    strcpy(komp1.nazwa, "Dell");

    // 6) Zmie� nazw� komputera komp2 na Lenovo

    strcpy(komp2.nazwa, "Lenovo");

    // 7) Zmie� nazw� komputera komp3 na Asus

    strcpy(komp3.nazwa, "Asus");

    // 8) Zmie� wiek komputera komp2 na 22 lata

    komp2.ileMaLat = 22;

    // 9) Zmie� czyLaptop komputera komp3 na true

    komp3.czyLaptop = true;

    // 10) Postarz komputer komp1 o 3 lata

    postarz(&komp1, 3);

    // 11) Wypisz informacje o obiektach komp1, komp2, komp3

    show(&komp1);
    show(&komp2);
    show(&komp3);

    // 12) stw�rz tablic� o nazwie tab trzech komputer�w

    Komputer tab[3];

    // 13) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Przejd� tablic� i wype�nij j� komputerami uzywaj�c odpowiedniej funkcji.

    for (Komputer *p = tab; p < tab + 3; ++p)
    {
        *p = makeKomputer(nazwa, cena, ileMaLat, czyLaptop);
    }

    // 14) W p�tli for do przechodzenia tablicy zamiast indeks�w nale�y u�y� wska�nik�w, a ka�dy operator indeksowania nale�y zastapi� operatorem dereferencji!!
    // Wypisz informacje o wszystkich obiektach typu Komputer znajduj�cych sie w tablicy tab

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
