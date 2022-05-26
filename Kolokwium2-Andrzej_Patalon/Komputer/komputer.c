#include <stdio.h>
#include <string.h>
#include "komputer.h"


Komputer makeKomputer(const char *nazwa, double cena, int ileMaLat, bool czyLaptop)
{
    Komputer komp;

    strcpy(komp.nazwa, nazwa);
    komp.cena = cena;
    komp.ileMaLat = ileMaLat;
    komp.czyLaptop = czyLaptop;

    return komp;
}

Komputer makeKomputerCopy(const Komputer *komp)
{
    Komputer kopia;

    strcpy(kopia.nazwa, komp->nazwa);
    kopia.cena = komp->cena;
    kopia.ileMaLat = komp->ileMaLat;
    kopia.czyLaptop = komp->czyLaptop;

    return kopia;
}

void show(const Komputer *komp)
{
    printf("\n");
    printf("Nazwa komputera: %s.\n", komp->nazwa);
    printf("Cena: %lf.\n", komp->cena);
    printf("Ile ma lat: %d\n", komp->ileMaLat);
    if (komp->czyLaptop)
    {
        printf("Laptop.\n");
    }
    else
    {
        printf("Stacjonarny.\n");
    }
}

void postarz(Komputer *komp, int lata)
{
    komp->ileMaLat += lata;
}


