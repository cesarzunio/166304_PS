#ifndef KOMPUTER_H
#define KOMPUTER_H

#include <stdbool.h>

#define MAX_LEN 50

typedef struct Komputer
{
    char nazwa[MAX_LEN - 1];
    double cena;
    int ileMaLat;
    bool czyLaptop;

} Komputer;

// Tworzy strukturê Komputer
Komputer makeKomputer(const char *nazwa, double cena, int ileMaLat, bool czyLaptop);

// Tworzy kopiê komputera
Komputer makeKomputerCopy(const Komputer *komp);

// Postarza dany komputer o zadan¹ liczbê lat
void postarz(Komputer *komp, int lata);

// Wyœwietla dane komputera
void show(const Komputer *komp);

#endif
